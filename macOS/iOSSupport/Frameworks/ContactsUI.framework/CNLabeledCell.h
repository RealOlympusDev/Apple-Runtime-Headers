//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, NSString, UIImageView, UILabel, UIView;
@protocol ABText;

__attribute__((visibility("hidden")))
@interface CNLabeledCell : CNContactCell
{
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    BOOL _labelViewNeedsHuggingContent;
    BOOL _valueViewNeedsHuggingContent;
    UIImageView *_chevron;
}

+ (BOOL)wantsHorizontalLayout;
+ (BOOL)wantsStandardConstraints;
+ (BOOL)wantsChevron;
@property(readonly, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(nonatomic) BOOL valueViewNeedsHuggingContent; // @synthesize valueViewNeedsHuggingContent=_valueViewNeedsHuggingContent;
@property(nonatomic) BOOL labelViewNeedsHuggingContent; // @synthesize labelViewNeedsHuggingContent=_labelViewNeedsHuggingContent;
- (void).cxx_destruct;
- (void)tintColorDidChange;
@property(copy, nonatomic) NSDictionary *valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes;
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) UILabel *standardValueView;
@property(readonly, nonatomic) UILabel *standardLabelView;
@property(readonly, nonatomic) UIView *rightMostView;
@property(readonly, nonatomic) UIView<ABText> *valueView;
@property(readonly, nonatomic) UIView<ABText> *labelView;
- (id)variableConstraintsForHorizontalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)variableConstraintsForVerticalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)constantConstraintsForStandardLayout;
- (id)variableConstraints;
- (id)constantConstraints;
@property(readonly, nonatomic) double valueViewBottomMargin;
@property(readonly, nonatomic) double chevronWidth;
- (double)minCellHeight;
- (void)removeChevron;
- (void)addChevron;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)displaysCellSelectionState;
- (BOOL)allowsCellSelection;

@end

