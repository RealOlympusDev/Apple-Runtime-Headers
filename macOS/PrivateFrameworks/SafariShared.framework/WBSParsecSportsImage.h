//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSString, WBSParsecImageRepresentation;

@interface WBSParsecSportsImage : WBSParsecModel
{
    long long _alignment;
    WBSParsecImageRepresentation *_imageRepresentation;
    NSString *_label;
    NSString *_name;
}

+ (id)schema;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (id)initWithSFSportsTeam:(id)arg1 alignment:(long long)arg2;
- (id)initWithDictionary:(id)arg1;

@end

