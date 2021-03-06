//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayerLayer, AVSecondScreenPlayerLayerView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface AVSecondScreenViewController : UIViewController
{
    BOOL _playingOnSecondScreen;
    UIView *_contentView;
    AVPlayerLayer *_sourcePlayerLayer;
    UILabel *_debugLabel;
    AVSecondScreenPlayerLayerView *_playerLayerView;
}

@property(retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(readonly, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(nonatomic) __weak AVPlayerLayer *sourcePlayerLayer; // @synthesize sourcePlayerLayer=_sourcePlayerLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateContentViewIfNeeded;
- (void)setDebugText:(id)arg1;
- (id)debugText;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) struct CGSize videoDisplaySize;
- (void)loadPlayerLayerViewIfNeeded;
- (void)dealloc;

@end

