//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosPlayer/ISBasePlayerUIView.h>

@class ISLiveWallpaperPlayer, NSTimer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView
{
    _Bool _touching;
    UIGestureRecognizer *_playbackGestureRecognizer;
    double _force;
    NSTimer *_updateTimer;
}

@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) _Bool touching; // @synthesize touching=_touching;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updatePlayer;
- (void)_handlePlaybackRecognizer:(id)arg1;
- (void)_handleUpdateTimer;
- (void)willMoveToWindow:(id)arg1;
- (void)_ISLiveWallpaperUIViewCommonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) ISLiveWallpaperPlayer *player; // @dynamic player;

@end

