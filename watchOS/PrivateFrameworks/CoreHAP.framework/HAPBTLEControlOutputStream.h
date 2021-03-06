//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPBTLETransactionIdentifier, NSData, NSObject, NSOperationQueue;
@protocol HAPBTLEControlOutputStreamDelegate, OS_dispatch_queue;

@interface HAPBTLEControlOutputStream : HMFObject
{
    unsigned char _type;
    _Bool _complete;
    _Bool _open;
    id <HAPBTLEControlOutputStreamDelegate> _delegate;
    HAPBTLETransactionIdentifier *_transactionIdentifier;
    NSData *_payload;
    unsigned int _mtuLength;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned int _controlPayloadWrittenLength;
    NSOperationQueue *_operationQueue;
    double _timeoutInterval;
}

+ (id)shortDescription;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) unsigned int controlPayloadWrittenLength; // @synthesize controlPayloadWrittenLength=_controlPayloadWrittenLength;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) unsigned int mtuLength; // @synthesize mtuLength=_mtuLength;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property __weak id <HAPBTLEControlOutputStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_nextPacketWithMaximumLength:(unsigned int)arg1 error:(id *)arg2;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendNextPayloadFragment;
- (void)_complete;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)open;
- (unsigned int)remainingControlPayloadLength;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (id)initWithControlType:(unsigned char)arg1 transactionIdentifier:(id)arg2 controlPayload:(id)arg3 mtuLength:(unsigned int)arg4 timeoutInterval:(double)arg5;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType completionHandler;

@end

