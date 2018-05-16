﻿#include "Graph.h"

#pragma once

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
	
Graph::Graph(PictureBox ^pb)
{
	this->pb = pb;
	gr = pb->CreateGraphics();
}

void Graph::Clear()
{
	gr->Clear(pb->BackColor);
}

void Graph::Setup(String ^xAxisName, double xAxisMaxVal, String ^yAxisName, double yAxisMaxVal)
{
	this->xAxisName = xAxisName;
	this->yAxisName = yAxisName;

	this->grCenter.X = 0;
	this->grCenter.Y = pb->Height / 2;

	grScaleX = (xAxisMaxVal / 10);
	grScaleY = (yAxisMaxVal / 10);

	gridStepX = pb->Width / 10;
	gridStepY = pb->Height / 10;
}

void Graph::MakeGrid(int n, double l, bool isFirstRed)
{
	if (this->grScaleX == 0)
	{
		this->grScaleX = gridStepX;
	}
	if (this->grScaleY == 0)
	{
		this->grScaleY = gridStepY;
	}

	for (int i = 0; i < n; i++) {
		Color c1 = Color::LightPink;
		Color c2 = Color::DeepSkyBlue;
		AddRect(i*(int)l, 500, (int)l+1, 1000, isFirstRed ? c1 : c2);
		isFirstRed = !isFirstRed;
	}

	for (int i = grCenter.X; (i >= grFields) && (i <= (pb->Width - grFields)); i += gridStepX)
	{
		gr->DrawLine(gcnew Pen(Color::Gray, 1), i, grFields, i, pb->Height - grFields);
	}
	for (int i = grCenter.X; (i >= grFields) && (i <= (pb->Width - grFields)); i -= gridStepX)
	{
		gr->DrawLine(gcnew Pen(Color::Gray, 1), i, grFields, i, pb->Height - grFields);
	}

	for (int i = grCenter.Y; (i >= grFields) && (i <= (pb->Height - grFields)); i += gridStepY)
	{
		gr->DrawLine(gcnew Pen(Color::Gray, 1), grFields, i, pb->Width - grFields, i);
	}
	for (int i = grCenter.Y; (i >= grFields) && (i <= (pb->Height - grFields)); i -= gridStepY)
	{
		gr->DrawLine(gcnew Pen(Color::Gray, 1), grFields, i, pb->Width - grFields, i);
	}

	gr->DrawLine(gcnew Pen(Color::Black, 1), grCenter.X, grFields, grCenter.X, pb->Height - grFields);
	gr->DrawLine(gcnew Pen(Color::Black, 1), grFields, grCenter.Y, pb->Width - grFields, grCenter.Y);

	AddString(grCenter.X, 130, yAxisName);
	AddString(pb->Width - 30, 10, xAxisName);
	AddString(0, 0, "0");

	AddString(gridStepX, 16, Convert::ToString(grScaleX));
	AddString(0, gridStepY, Convert::ToString(grScaleY));
}

void Graph::AddString(int x, int y, String ^s)
{
	AddString(x, y, s, Color::Black);
}

void Graph::AddString(int x, int y, String ^s, Color c)
{
		
	x += grCenter.X;
	y = grCenter.Y - y;
		
	gr->DrawString(s, gcnew Font("OpenSans", 8), gcnew SolidBrush(c), x, y);
}

bool Graph::AddDot(int x, int y, Color c)
{					
	x += grCenter.X;
	y = grCenter.Y - y;
		
	gr->DrawRectangle(gcnew Pen(gcnew SolidBrush(c), 1), x, y, 1, 1);
	return true;		
}

bool Graph::AddGraphDot(double x, double y)
{
	return AddGraphDot(x, y, Color::Red);
}

bool Graph::AddGraphDot(double x, double y, Color c)
{
	return AddDot(safe_cast<int>(safe_cast<double>(gridStepX) / grScaleX * x), safe_cast<int>(safe_cast<double>(gridStepY) / grScaleY * y), c);
}

bool Graph::AddRect(int x, int y, int dx, int dy, Color c)
{
	x = safe_cast<int>(safe_cast<double>(gridStepX) / grScaleX * (x + grCenter.X));
	y = safe_cast<int>(safe_cast<double>(gridStepY) / grScaleY * (-y + grCenter.X));
	dx = safe_cast<int>(safe_cast<double>(gridStepX) / grScaleX * dx);
	dy = safe_cast<int>(safe_cast<double>(gridStepY) / grScaleY * dy);

	gr->FillRectangle(gcnew SolidBrush(c), x, y, dx, dy);
	return true;
}
