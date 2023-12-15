///|/ Copyright (c) Prusa Research 2023 Enrico Turri @enricoturri1966, Pavel Mikuš @Godrak
///|/
///|/ libvgcode is released under the terms of the AGPLv3 or higher
///|/
#ifndef VGCODE_VIEWRANGE_HPP
#define VGCODE_VIEWRANGE_HPP

//################################################################################################################################
// PrusaSlicer development only -> !!!TO BE REMOVED!!!
#if ENABLE_NEW_GCODE_VIEWER
//################################################################################################################################

#include "Range.hpp"

namespace libvgcode {

class ViewRange
{
public:
    const Interval& get_full() const;
    void set_full(const Range& other);
    void set_full(const Interval& range);
    void set_full(Interval::value_type min, Interval::value_type max);

    const Interval& get_enabled() const;
    void set_enabled(const Range& other);
    void set_enabled(const Interval& range);
    void set_enabled(Interval::value_type min, Interval::value_type max);

    const Interval& get_visible() const;
		void set_visible(const Range& other);
    void set_visible(const Interval& range);
    void set_visible(Interval::value_type min, Interval::value_type max);

    void reset();

private:
    //
    // Full range
    // The range of moves that could potentially be visible.
    // It is usually equal to the enabled range, unless Settings::top_layer_only_view_range is set to true.
    //
    Range m_full;

    //
    // Enabled range
    // The range of moves that are enabled for visualization.
    // It is usually equal to the full range, unless Settings::top_layer_only_view_range is set to true.
    //
    Range m_enabled;

    //
    // Visible range
    // The range of moves that are currently rendered.
    //
    Range m_visible;
};

} // namespace libvgcode

//################################################################################################################################
// PrusaSlicer development only -> !!!TO BE REMOVED!!!
#endif // ENABLE_NEW_GCODE_VIEWER
//################################################################################################################################

#endif // VGCODE_VIEWRANGE_HPP