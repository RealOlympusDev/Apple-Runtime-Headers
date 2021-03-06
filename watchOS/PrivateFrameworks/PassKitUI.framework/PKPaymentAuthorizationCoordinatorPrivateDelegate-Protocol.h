//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPaymentAuthorizationCoordinator, PKServiceProviderPurchase;

@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate <NSObject>

@optional
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didEncounterAuthorizationEvent:(unsigned int)arg2;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *, PKApplePayTrustSignatureRequest *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizeDisbursementVoucher:(PKDisbursementVoucher *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didAuthorizePurchase:(PKServiceProviderPurchase *)arg2 completion:(void (^)(int))arg3;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 didRequestMerchantSession:(void (^)(PKPaymentMerchantSession *, NSError *))arg2;
- (void)paymentAuthorizationCoordinator:(PKPaymentAuthorizationCoordinator *)arg1 willFinishWithError:(NSError *)arg2;
@end

