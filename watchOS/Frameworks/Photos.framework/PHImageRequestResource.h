//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PLResourceIdentity-Protocol.h>

@class NSString, PLPhotoLibrary;
@protocol PLUniformTypeIdentifierIdentity;

@interface PHImageRequestResource : NSObject <PLResourceIdentity>
{
    PLPhotoLibrary *_photoLibrary;
    unsigned int _resourceType;
    unsigned int _version;
    unsigned int _recipeID;
    id <PLUniformTypeIdentifierIdentity> _uniformTypeIdentifierID;
    unsigned int _orientation;
    long long _unorientedWidth;
    long long _unorientedHeight;
}

+ (id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4;
@property(readonly, nonatomic) long long unorientedHeight; // @synthesize unorientedHeight=_unorientedHeight;
@property(readonly, nonatomic) long long unorientedWidth; // @synthesize unorientedWidth=_unorientedWidth;
@property(readonly, nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; // @synthesize uniformTypeIdentifierID=_uniformTypeIdentifierID;
@property(readonly, nonatomic) unsigned int recipeID; // @synthesize recipeID=_recipeID;
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
@property(readonly, nonatomic) unsigned int resourceType; // @synthesize resourceType=_resourceType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

