//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLPXNumberFilter.h>

__attribute__((visibility("hidden")))
@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter
{
    double _threshold;
    double _minimumChange;
}

@property(nonatomic) double minimumChange; // @synthesize minimumChange=_minimumChange;
- (double)updatedOutput;
- (double)initialOutputForInput:(double)arg1;
- (id)initWithInput:(double)arg1;

@end

