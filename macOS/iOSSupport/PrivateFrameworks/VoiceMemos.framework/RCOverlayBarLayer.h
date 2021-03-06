//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface RCOverlayBarLayer : CALayer
{
    CALayer *_topKnob;
    CALayer *_bar;
    CALayer *_bottomKnob;
    UIColor *_color;
    BOOL _barWidthMatchesKnobs;
    UIImage *_barGlyph;
    double _widthMultiplier;
}

+ (double)_internalSelectionKnobRadius;
+ (double)_internalSelectionBarWidth;
+ (double)selectionKnobRadius;
+ (double)selectionBarWidth;
@property(nonatomic) BOOL barWidthMatchesKnobs; // @synthesize barWidthMatchesKnobs=_barWidthMatchesKnobs;
@property(nonatomic) double widthMultiplier; // @synthesize widthMultiplier=_widthMultiplier;
@property(retain, nonatomic) UIImage *barGlyph; // @synthesize barGlyph=_barGlyph;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4;
- (id)barComponents;
- (double)selectionBarWidth;
- (double)selectionKnobRadius;
- (id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(BOOL)arg3 bottomKnob:(BOOL)arg4 widthMultiplier:(double)arg5 barWidthMatchesKnobs:(BOOL)arg6;

@end

