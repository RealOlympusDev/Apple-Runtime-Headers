//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject
{
    NSString *_file;
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)longFormVideoAppBundleIDs;
- (void)execute;
- (id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2;

@end

