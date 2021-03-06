//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSString, VUICollectionView, VUIGradientMaskProperties, VUIMediaEntity, VUITVLockupViewCell;
@protocol VUITVGridCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUITVGridCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <VUITVGridCollectionViewControllerDelegate> _gridCollectionViewControllerDelegate;
    NSArray *_mediaEntities;
    NSString *_pageType;
    VUITVLockupViewCell *_sizingCell;
    VUIMediaEntity *_currentlySelectedMediaEntity;
    double _cellWidth;
    long long _gridStyle;
    VUICollectionView *_collectionView;
    NSIndexPath *_indexPathForLastFocusedItem;
    NSDictionary *_artworkInfoDictionary;
    VUIGradientMaskProperties *_maskProperties;
}

@property(retain, nonatomic) VUIGradientMaskProperties *maskProperties; // @synthesize maskProperties=_maskProperties;
@property(retain, nonatomic) NSDictionary *artworkInfoDictionary; // @synthesize artworkInfoDictionary=_artworkInfoDictionary;
@property(retain, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
@property(retain, nonatomic) VUICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) VUIMediaEntity *currentlySelectedMediaEntity; // @synthesize currentlySelectedMediaEntity=_currentlySelectedMediaEntity;
@property(retain, nonatomic) VUITVLockupViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
@property(nonatomic) __weak id <VUITVGridCollectionViewControllerDelegate> gridCollectionViewControllerDelegate; // @synthesize gridCollectionViewControllerDelegate=_gridCollectionViewControllerDelegate;
- (void).cxx_destruct;
- (void)_showExtrasForMediaItem:(id)arg1;
- (void)_startPlaybackWithMediaItem:(id)arg1;
- (void)_playPausePressed:(id)arg1;
- (void)_addPlayPauseHandler;
- (void)_configureSizingCellForItemAtIndexPath:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)updateWithMediaEntities:(id)arg1 changeSet:(id)arg2 artworkDictionary:(id)arg3 animated:(_Bool)arg4;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMediaEntities:(id)arg1 artworkDictionary:(id)arg2 maskProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

