//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class FI_TMouseOverButton, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FI_TSidebarItemCell : NSTableCellView
{
    struct TFENode _node;
    _Bool _selected;
    int _actionKind;
    _Bool _isEditing;
    _Bool _enabled;
    FI_TMouseOverButton *_button;
    function_3343ca80 _iconGetter;
}

+ (void)drawSidebarIcon:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 highlighted:(_Bool)arg4;
+ (const struct TFENode *)nodeForItem:(id)arg1;
+ (struct CGRect)roughActionButtonRectForCell:(const struct CGRect *)arg1;
+ (unsigned long long)frameRateMicroseconds;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (id)makeSidebarItemCellForView:(id)arg1;
@property(retain) FI_TMouseOverButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) int actionKind; // @synthesize actionKind=_actionKind;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nextAnimationFrame;
- (void)updateLayer;
- (void)viewWillDraw;
- (void)layoutDetails;
- (struct CGRect)_textFieldFrame;
- (struct CGRect)_imageViewFrame;
@property(readonly, retain, nonatomic) NSImage *image;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)setStringValue:(const struct TString *)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (double)imageSize;
- (_Bool)isHighlighted;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)stopAnimatingIfNeeded;
- (void)startAnimatingIfNeeded;
- (_Bool)hasActionButton;
- (int)actionButtonMouseState;
- (double)optimalWidthForHeight:(double)arg1;
@property(readonly, retain, nonatomic) NSString *name;
- (_Bool)isZone;
- (id)description;
- (id)dataForIdentifier:(id)arg1;
- (void)dealloc;
- (void)finishMakingWithNode:(const struct TFENode *)arg1 actionKind:(int)arg2 iconGetter:(function_3343ca80)arg3;
- (void)setRowSizeStyle:(long long)arg1;
- (void)updateAction:(int)arg1;
- (void)setAction:(int)arg1;
- (void)removeProgressViewIfNeeded;
- (void)addProgressViewIfNeeded;
- (void)updateNameAndIcon;
- (void)finishAddingActionButtonIfNeeded:(function_058db925)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

