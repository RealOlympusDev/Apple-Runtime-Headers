//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    BOOL _isFinished;
    BOOL _isExecuting;
    BOOL _finishInvoked;
    NSString *_sectionID;
    id _context;
    NSDate *_startDate;
    NSString *_operationID;
    CDUnknownBlockType _daemonInvokeBlock;
}

@property(nonatomic) BOOL finishInvoked; // @synthesize finishInvoked=_finishInvoked;
@property(readonly, nonatomic) CDUnknownBlockType daemonInvokeBlock; // @synthesize daemonInvokeBlock=_daemonInvokeBlock;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)_setIsExecuting:(BOOL)arg1;
- (void)_setIsFinished:(BOOL)arg1;
- (BOOL)isConcurrent;
- (void)finish;
- (void)main;
- (void)start;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(CDUnknownBlockType)arg2;

@end

