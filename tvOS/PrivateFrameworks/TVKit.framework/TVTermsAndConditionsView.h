//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIScrollView, UIVisualEffectView, _UIRepeatingPressGestureRecognizer;
@protocol TVTermsAndConditionsViewDelegate;

@interface TVTermsAndConditionsView : UIView
{
    UILabel *_titleLabel;
    UIScrollView *_contentView;
    UIView *_buttonContainerView;
    NSMutableArray *_buttons;
    NSMutableDictionary *_arrayIndexToSpecifiedButtonIndexMapping;
    UIVisualEffectView *_effectView;
    _UIRepeatingPressGestureRecognizer *_upButtonGesture;
    _UIRepeatingPressGestureRecognizer *_downButtonGesture;
    _Bool _waiting;
    id <TVTermsAndConditionsViewDelegate> _delegate;
}

@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TVTermsAndConditionsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didSelectButton:(id)arg1;
- (struct CGAffineTransform)_buttonDisappearTransform;
- (struct CGAffineTransform)_buttonInitialTransform;
- (void)_prepareForAppearance;
- (void)animateDisappearanceWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateAppearance;
@property(retain, nonatomic) NSString *title;
- (void)addButtonWithTitle:(id)arg1 atIndex:(long long)arg2;
- (_Bool)canBecomeFocused;
- (id)preferredFocusedView;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSArray *buttons;
- (id)initWithFrame:(struct CGRect)arg1;

@end

