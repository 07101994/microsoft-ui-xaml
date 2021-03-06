// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RatingItemImageInfoProperties
{
public:
    RatingItemImageInfoProperties();

    void DisabledImage(winrt::ImageSource const& value);
    winrt::ImageSource DisabledImage();

    void Image(winrt::ImageSource const& value);
    winrt::ImageSource Image();

    void PlaceholderImage(winrt::ImageSource const& value);
    winrt::ImageSource PlaceholderImage();

    void PointerOverImage(winrt::ImageSource const& value);
    winrt::ImageSource PointerOverImage();

    void PointerOverPlaceholderImage(winrt::ImageSource const& value);
    winrt::ImageSource PointerOverPlaceholderImage();

    void UnsetImage(winrt::ImageSource const& value);
    winrt::ImageSource UnsetImage();

    static winrt::DependencyProperty DisabledImageProperty() { return s_DisabledImageProperty; }
    static winrt::DependencyProperty ImageProperty() { return s_ImageProperty; }
    static winrt::DependencyProperty PlaceholderImageProperty() { return s_PlaceholderImageProperty; }
    static winrt::DependencyProperty PointerOverImageProperty() { return s_PointerOverImageProperty; }
    static winrt::DependencyProperty PointerOverPlaceholderImageProperty() { return s_PointerOverPlaceholderImageProperty; }
    static winrt::DependencyProperty UnsetImageProperty() { return s_UnsetImageProperty; }

    static GlobalDependencyProperty s_DisabledImageProperty;
    static GlobalDependencyProperty s_ImageProperty;
    static GlobalDependencyProperty s_PlaceholderImageProperty;
    static GlobalDependencyProperty s_PointerOverImageProperty;
    static GlobalDependencyProperty s_PointerOverPlaceholderImageProperty;
    static GlobalDependencyProperty s_UnsetImageProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
