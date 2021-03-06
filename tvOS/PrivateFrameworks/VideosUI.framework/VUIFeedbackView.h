//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TVRatingBadgeView, VUIFeedbackLayout, VUILabel, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIFeedbackView : UIView
{
    VUIFeedbackLayout *_layout;
    UIView *_headerView;
    VUILabel *_headerSubtitleLabel;
    _TVImageView *_headerBadgeView;
    VUILabel *_sourceLabel;
    _TVImageView *_sourceBadgeView;
    TVRatingBadgeView *_ratingView;
    UIView *_descriptionView;
    VUILabel *_prototypeSubtitleLabel;
    VUILabel *_prototypeHeaderLabel;
    struct CGSize _headerBadgeSize;
    struct CGSize _sourceBadgeSize;
}

+ (struct CGSize)_scaledBadgeSizeWithImageLayout:(id)arg1 traitCollection:(id)arg2;
+ (id)sourceBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)descriptionViewWithElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)sourceLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerImageViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerSubtitleLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)headerTitleViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) VUILabel *prototypeHeaderLabel; // @synthesize prototypeHeaderLabel=_prototypeHeaderLabel;
@property(retain, nonatomic) VUILabel *prototypeSubtitleLabel; // @synthesize prototypeSubtitleLabel=_prototypeSubtitleLabel;
@property(nonatomic) struct CGSize sourceBadgeSize; // @synthesize sourceBadgeSize=_sourceBadgeSize;
@property(nonatomic) struct CGSize headerBadgeSize; // @synthesize headerBadgeSize=_headerBadgeSize;
@property(retain, nonatomic) UIView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) TVRatingBadgeView *ratingView; // @synthesize ratingView=_ratingView;
@property(retain, nonatomic) _TVImageView *sourceBadgeView; // @synthesize sourceBadgeView=_sourceBadgeView;
@property(retain, nonatomic) VUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) _TVImageView *headerBadgeView; // @synthesize headerBadgeView=_headerBadgeView;
@property(retain, nonatomic) VUILabel *headerSubtitleLabel; // @synthesize headerSubtitleLabel=_headerSubtitleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VUIFeedbackLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForCellReuse;
- (void)setSemanticContentAttribute:(long long)arg1;

@end

