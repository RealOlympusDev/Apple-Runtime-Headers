//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLTrip : NSObject
{
    unsigned int _type;
    NSArray *_items;
}

@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (double)duration;
- (id)typeDescription;
- (id)description;
- (id)initWithItems:(id)arg1 type:(unsigned int)arg2;

@end

