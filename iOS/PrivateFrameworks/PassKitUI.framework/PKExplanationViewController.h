//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class NSString, OBPrivacyLinkController, PKExplanationView, UIActivityIndicatorView, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate>
{
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _showingSpinner;
    _Bool _wasBackHidden;
    _Bool _showCancelButton;
    _Bool _showDoneButton;
    id <PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
    long long _context;
    PKExplanationView *_explanationView;
    OBPrivacyLinkController *_privacyLinkController;
}

@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(readonly, nonatomic) PKExplanationView *explanationView; // @synthesize explanationView=_explanationView;
@property(nonatomic) _Bool showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <PKExplanationViewControllerDelegate> explanationViewControllerDelegate; // @synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)showNavigationBarSpinner:(_Bool)arg1;
- (void)_dismissViewController;
- (void)_donePressed;
- (void)_cancelPressed;
- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

