//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class INKContent, NSArray, NSBundle, NSLayoutConstraint, NSString, UITraitCollection;
@protocol INKContentViewDelegate;

@interface INKContentView : UIView
{
    _Bool _windowShownDelayInProgress;
    _Bool _isPartOfWindow;
    UITraitCollection *__preferredTraitCollection;
    long long __cacheHorizontalSizeClass;
    NSString *__cacheContentSizeCategory;
    NSBundle *__frameworkBundle;
    UIView *__contentView;
    UIView *__bottomSeparatorView;
    NSLayoutConstraint *__bottomSeparatorHeightConstraint;
    NSLayoutConstraint *__contentViewBottomConstraint;
    NSArray *_compactSizeClassHorizontalConstraints;
    NSArray *_regularSizeClassHorizontalConstraints;
    _Bool _displaysBottomSeparator;
    _Bool __accessbilitySizeCategory;
    INKContent *_content;
    id <INKContentViewDelegate> __delegate;
    struct UIEdgeInsets _contentInsets;
}

@property(copy, nonatomic) NSBundle *_frameworkBundle; // @synthesize _frameworkBundle=__frameworkBundle;
@property(copy, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(nonatomic) __weak id <INKContentViewDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic, getter=_isAccessbilitySizeCategory) _Bool _accessbilitySizeCategory; // @synthesize _accessbilitySizeCategory=__accessbilitySizeCategory;
@property(copy, nonatomic) INKContent *content; // @synthesize content=_content;
@property(nonatomic) _Bool displaysBottomSeparator; // @synthesize displaysBottomSeparator=_displaysBottomSeparator;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)contentDisplayDelay;
- (void)cancelContentDisplayDelay;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_currentContentSizeCategory;
- (_Bool)_isContentSizeCategoryChanged;
- (_Bool)_isContentSizeAccessibilityCategory;
- (_Bool)_isAccessibilitySizeCategoryChanged;
- (void)_contentSizeCategoryDidChange;
- (void)_accessibilitySizeCategoryDidChange;
- (void)updateHorizontalContraints;
- (void)_setPreferredTraitCollection:(id)arg1;
- (id)_preferredTraitCollection;
- (_Bool)_isHorizontalSizeClassChanged:(id)arg1;
- (void)updateConstraints;
- (id)init;
- (id)_initWithContent:(id)arg1;
- (void)dealloc;

@end

