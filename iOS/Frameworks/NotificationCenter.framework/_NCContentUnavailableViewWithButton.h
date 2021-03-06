//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface _NCContentUnavailableViewWithButton : UIView
{
    UILabel *_titleLabel;
    UIView *_backgroundView;
    CDUnknownBlockType _buttonHandler;
}

@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_updateVisualStyling;
- (id)_visualStylingProviderForCategory:(long long)arg1;
- (void)_configureBackgroundView;
- (void)_configureTitleLabelWithTitle:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)initWithTitle:(id)arg1 buttonAction:(CDUnknownBlockType)arg2;

@end

