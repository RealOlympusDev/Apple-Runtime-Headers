//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse
{
    NSDictionary *_devices;
}

@property(copy, nonatomic) NSDictionary *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

