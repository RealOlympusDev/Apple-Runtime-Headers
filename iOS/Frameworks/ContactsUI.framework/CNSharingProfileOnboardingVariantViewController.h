//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPhotoPickerVariantListController.h>

#import <ContactsUI/_UIScrollViewLayoutObserver-Protocol.h>

@class OBBoldTrayButton, OBButtonTray, OBHeaderView, OBLinkTrayButton, OBNavigationBarDisplayState, UINavigationController;
@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingVariantViewController : CNPhotoPickerVariantListController <_UIScrollViewLayoutObserver>
{
    _Bool _shouldShowPoseButton;
    id <CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
    OBHeaderView *_onboardingHeaderView;
    OBButtonTray *_buttonTray;
    OBBoldTrayButton *_continueButton;
    OBLinkTrayButton *_poseButton;
    UINavigationController *_retainedNavigationController;
    OBNavigationBarDisplayState *_cachedBarState;
}

+ (_Bool)_navigationBarTitleShouldShowForHeaderView:(id)arg1 inScrollView:(id)arg2;
+ (void)updateNavigationBarWithNavigationItem:(id)arg1 forHeaderView:(id)arg2 inScrollView:(id)arg3 animated:(_Bool)arg4;
@property(retain, nonatomic) OBNavigationBarDisplayState *cachedBarState; // @synthesize cachedBarState=_cachedBarState;
@property(retain, nonatomic) UINavigationController *retainedNavigationController; // @synthesize retainedNavigationController=_retainedNavigationController;
@property(retain, nonatomic) OBLinkTrayButton *poseButton; // @synthesize poseButton=_poseButton;
@property(retain, nonatomic) OBBoldTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) OBButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(retain, nonatomic) OBHeaderView *onboardingHeaderView; // @synthesize onboardingHeaderView=_onboardingHeaderView;
@property(nonatomic) _Bool shouldShowPoseButton; // @synthesize shouldShowPoseButton=_shouldShowPoseButton;
@property(nonatomic) __weak id <CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate; // @synthesize onboardingDelegate=_onboardingDelegate;
- (void).cxx_destruct;
- (_Bool)_scrollViewContentIsUnderTrayForScrollView:(id)arg1;
- (void)updateTrayBackgroundForScrollView:(id)arg1;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTapPose:(id)arg1;
- (void)didTapContinue:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateContentInsets:(struct UIEdgeInsets)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationItem;
- (void)restoreNavigationBarAppearance;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)applyAutomaticScrollToEdgeBehaviorToNavigationItem:(id)arg1 withDistance:(double)arg2;

@end

