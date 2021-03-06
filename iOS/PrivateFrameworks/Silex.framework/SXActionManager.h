//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionManager-Protocol.h>

@class NSString, SXActionManagerPreview;
@protocol SXActionActivityManager, SXActionViewManager;

@interface SXActionManager : NSObject <SXActionManager>
{
    id <SXActionActivityManager> _activityManager;
    id <SXActionViewManager> _viewManager;
    SXActionManagerPreview *_currentPreview;
}

@property(retain, nonatomic) SXActionManagerPreview *currentPreview; // @synthesize currentPreview=_currentPreview;
@property(readonly, nonatomic) id <SXActionViewManager> viewManager; // @synthesize viewManager=_viewManager;
@property(readonly, nonatomic) id <SXActionActivityManager> activityManager; // @synthesize activityManager=_activityManager;
- (void).cxx_destruct;
- (void)notifyPostActionHandlers:(id)arg1 action:(id)arg2 state:(unsigned long long)arg3;
- (void)commitPreviewViewController:(id)arg1;
- (id)previewViewControllerForAction:(id)arg1;
- (id)contextMenuConfigurationForAction:(id)arg1;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4 mode:(unsigned long long)arg5;
- (void)performAction:(id)arg1 postActionHandlers:(id)arg2;
- (id)initWithActionActivityManager:(id)arg1 viewManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

