//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSUUID;

@interface HFAnalyticsCameraClipPlayerDidStartPlayingEvent : HFAnalyticsEvent
{
    NSUUID *_clipID;
    NSUUID *_cameraID;
    NSUUID *_playbackSessionID;
}

@property(retain, nonatomic) NSUUID *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property(retain, nonatomic) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property(retain, nonatomic) NSUUID *clipID; // @synthesize clipID=_clipID;
- (void).cxx_destruct;
- (id)payload;
- (id)initWithData:(id)arg1;

@end

