//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PHPerson, PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController
{
    PXPeopleBootstrapConfirmationViewController *_confirmationViewController;
    PXPeopleBootstrapFinalViewController *_finalViewController;
}

@property(retain, nonatomic) PXPeopleBootstrapFinalViewController *finalViewController; // @synthesize finalViewController=_finalViewController;
@property(retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController; // @synthesize confirmationViewController=_confirmationViewController;
- (void).cxx_destruct;
- (id)_postNamingViewController;
@property(readonly, nonatomic) PHPerson *sourcePerson;
- (void)done:(id)arg1;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;

@end

