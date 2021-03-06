//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/_LSDClient.h>

#import <CoreServices/_LSDReadProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>
{
}

- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(_Bool)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;

@end

