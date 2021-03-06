//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer
{
    PXCuratedLibraryViewModel *_viewModel;
    long long _actionZoomLevel;
}

@property(readonly, nonatomic) long long actionZoomLevel; // @synthesize actionZoomLevel=_actionZoomLevel;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;

@end

