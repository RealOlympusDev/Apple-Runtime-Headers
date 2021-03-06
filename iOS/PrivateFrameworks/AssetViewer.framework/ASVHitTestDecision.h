//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASVHitTestResult, ASVRealHitTestResult;

@interface ASVHitTestDecision : NSObject
{
    ASVRealHitTestResult *_originalResult;
    ASVHitTestResult *_interpolatedResult;
    ASVHitTestResult *_finalResult;
    ASVHitTestResult *_interpolatedOrFinalResult;
}

@property(retain, nonatomic) ASVHitTestResult *interpolatedOrFinalResult; // @synthesize interpolatedOrFinalResult=_interpolatedOrFinalResult;
@property(retain, nonatomic) ASVHitTestResult *finalResult; // @synthesize finalResult=_finalResult;
@property(retain, nonatomic) ASVHitTestResult *interpolatedResult; // @synthesize interpolatedResult=_interpolatedResult;
@property(retain, nonatomic) ASVRealHitTestResult *originalResult; // @synthesize originalResult=_originalResult;
- (void).cxx_destruct;
- (id)initWithOriginalResult:(id)arg1 interpolatedResult:(id)arg2 finalResult:(id)arg3;

@end

