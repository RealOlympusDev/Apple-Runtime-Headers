//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HULayoutContainerView : UIView
{
    UIView *_contentView;
    CDUnknownBlockType _layoutBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)intrinsicContentSize;
- (id)initWithContentView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;

@end

