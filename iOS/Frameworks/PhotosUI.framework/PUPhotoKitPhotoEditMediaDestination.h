//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUMediaDestination.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination
{
    NSMutableDictionary *_pendingRequestsByRequestIdentifier;
}

@property(readonly, nonatomic, getter=_pendingRequestsByRequestIdentifier) NSMutableDictionary *pendingRequestsByRequestIdentifier; // @synthesize pendingRequestsByRequestIdentifier=_pendingRequestsByRequestIdentifier;
- (void).cxx_destruct;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (_Bool)supportsProgressForRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (_Bool)isSavingRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

