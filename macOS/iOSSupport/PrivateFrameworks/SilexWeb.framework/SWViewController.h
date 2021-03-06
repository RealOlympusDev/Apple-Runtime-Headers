//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SilexWeb/WKNavigationDelegate-Protocol.h>
#import <SilexWeb/WKUIDelegate-Protocol.h>

@class NSString, SWLoader, WKWebView;
@protocol SWContentRuleManager, SWDatastoreSynchronizationManager, SWDocumentStateReporting, SWErrorReporting, SWLogger, SWMessageHandlerManager, SWNavigationManager, SWProcessTerminationManager, SWReachabilityProvider, SWScriptsManager, SWSessionManager, SWSetupManager, SWTimeoutManager;

@interface SWViewController : UIViewController <WKNavigationDelegate, WKUIDelegate>
{
    id <SWScriptsManager> _scriptsManager;
    id <SWMessageHandlerManager> _messageHandlerManager;
    id <SWNavigationManager> _navigationManager;
    WKWebView *_webView;
    id <SWSetupManager> _setupManager;
    id <SWErrorReporting> _errorReporter;
    id <SWDocumentStateReporting> _documentStateReporter;
    id <SWTimeoutManager> _timeoutManager;
    id <SWProcessTerminationManager> _terminationManager;
    id <SWContentRuleManager> _contentRuleManager;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SWLogger> _logger;
    SWLoader *_loader;
    id <SWSessionManager> _sessionManager;
    id <SWDatastoreSynchronizationManager> _datastoreSynchronizationManager;
}

@property(readonly, nonatomic) id <SWDatastoreSynchronizationManager> datastoreSynchronizationManager; // @synthesize datastoreSynchronizationManager=_datastoreSynchronizationManager;
@property(readonly, nonatomic) id <SWSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) SWLoader *loader; // @synthesize loader=_loader;
@property(readonly, nonatomic) id <SWLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SWReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SWContentRuleManager> contentRuleManager; // @synthesize contentRuleManager=_contentRuleManager;
@property(readonly, nonatomic) id <SWProcessTerminationManager> terminationManager; // @synthesize terminationManager=_terminationManager;
@property(readonly, nonatomic) id <SWTimeoutManager> timeoutManager; // @synthesize timeoutManager=_timeoutManager;
@property(readonly, nonatomic) id <SWDocumentStateReporting> documentStateReporter; // @synthesize documentStateReporter=_documentStateReporter;
@property(readonly, nonatomic) id <SWErrorReporting> errorReporter; // @synthesize errorReporter=_errorReporter;
@property(readonly, nonatomic) id <SWSetupManager> setupManager; // @synthesize setupManager=_setupManager;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) id <SWNavigationManager> navigationManager; // @synthesize navigationManager=_navigationManager;
@property(readonly, nonatomic) id <SWMessageHandlerManager> messageHandlerManager; // @synthesize messageHandlerManager=_messageHandlerManager;
@property(readonly, nonatomic) id <SWScriptsManager> scriptsManager; // @synthesize scriptsManager=_scriptsManager;
- (void).cxx_destruct;
- (void)webView:(id)arg1 commitPreviewingViewController:(id)arg2;
- (id)webView:(id)arg1 previewingViewControllerForElement:(id)arg2 defaultActions:(id)arg3;
- (BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
@property(nonatomic) BOOL allowsRemoteInspection;
- (void)initiateLoadingWithLoader:(id)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWebView:(id)arg1 setupManager:(id)arg2 scriptsManager:(id)arg3 messageHandlerManager:(id)arg4 navigationManager:(id)arg5 errorReporter:(id)arg6 documentStateReporter:(id)arg7 timeoutManager:(id)arg8 terminationManager:(id)arg9 contentRuleManager:(id)arg10 reachabilityProvider:(id)arg11 logger:(id)arg12 sessionManager:(id)arg13 datastoreSynchronizationManager:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

