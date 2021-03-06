//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation
{
    NSMutableDictionary *_readers;
    CDUnknownBlockType _perDownloadCompletionBlock;
}

@property(copy) CDUnknownBlockType perDownloadCompletionBlock; // @synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)actionPrettyName;
- (id)transferredObjectsPrettyName;
- (void)cancelReaderID:(id)arg1;
- (void)addReaderID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mainWithTransfers:(id)arg1;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 forNonLocalVersion:(_Bool)arg2;

@end

