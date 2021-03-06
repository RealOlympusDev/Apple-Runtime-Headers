//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INReservation.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding>
{
    INDateComponentsRange *_reservationDuration;
    NSNumber *_partySize;
    CLPlacemark *_restaurantLocation;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) CLPlacemark *restaurantLocation; // @synthesize restaurantLocation=_restaurantLocation;
@property(readonly, copy) NSNumber *partySize; // @synthesize partySize=_partySize;
@property(readonly, copy) INDateComponentsRange *reservationDuration; // @synthesize reservationDuration=_reservationDuration;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9;

@end

