//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    unsigned long _switchIndex;
    NRDeviceCollectionHistory *_historyManager;
    unsigned long long _index;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak NRDeviceCollectionHistory *historyManager; // @synthesize historyManager=_historyManager;
@property(nonatomic) unsigned long switchIndex; // @synthesize switchIndex=_switchIndex;
@property(retain, nonatomic) NRDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NRMutableDeviceCollection *state;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned long)arg5;

@end

