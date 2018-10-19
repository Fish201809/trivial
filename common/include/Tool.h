﻿#pragma once

#include <osgViewer/Viewer>
#include <osg/Node>
#include <osg/Geode>
#include <osg/Group>
#include <osgDB/ReadFile>
#include <osgDB/WriteFile>
#include <osgUtil/Optimizer>
#include <osg/MatrixTransform>
#include <osg/ShapeDrawable>


class Tool
{
public:
	static osg::ref_ptr<osgViewer::Viewer> GetViewer();
	static osg::ref_ptr<osg::Node> CreateQuade();

	static osg::ref_ptr<osg::Node> CreateShape();
};