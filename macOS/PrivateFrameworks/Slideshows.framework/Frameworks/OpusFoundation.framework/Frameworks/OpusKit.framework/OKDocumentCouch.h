//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKDocumentCanvas.h>

@class NSMutableArray, NSMutableDictionary;

@interface OKDocumentCouch : OKDocumentCanvas
{
    NSMutableArray *_steps;
    NSMutableDictionary *_internalSettings;
}

+ (id)couchWithName:(id)arg1 settings:(id)arg2 steps:(id)arg3;
@property(readonly, copy, nonatomic) NSMutableArray *steps; // @synthesize steps=_steps;
- (void)resolveIfNeeded;
- (double)duration;
- (id)canvasWithName:(id)arg1;
- (id)lastStepForPageName:(id)arg1;
- (id)closestStepForPageName:(id)arg1;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andName:(id)arg2 forDocument:(id)arg3;
- (id)init;

@end

