//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface NMUSmallCollectionHeaderView : UIView
{
    UIImageView *_artworkImageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

