//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSPDigest;

__attribute__((visibility("hidden")))
@interface TSPDataUniqueIdentifier : NSObject <NSCopying>
{
    TSPDigest *_digest;
}

@property(readonly, nonatomic) TSPDigest *digest; // @synthesize digest=_digest;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *digestString;
- (id)initWithDigest:(id)arg1;
- (id)init;

@end

