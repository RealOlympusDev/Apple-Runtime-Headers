//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO
{
    CDUnknownBlockType _emissionHandler;
    float _scale;
    NSMutableArray *_prevPoints;
    CDStruct_86c70518 _lastPoint;
}

@property(nonatomic) CDStruct_86c70518 lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(CDStruct_86c70518)arg1;
- (id)initWithFIFO:(id)arg1 scale:(float)arg2;

@end

