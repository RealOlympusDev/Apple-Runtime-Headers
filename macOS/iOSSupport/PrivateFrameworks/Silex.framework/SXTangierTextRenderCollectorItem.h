//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXTextTangierFlowInfo, SXTextTangierFlowLayout, SXTextTangierFlowStorage, SXTextTangierStorage, SXTextTangierTextLayout, UIView;
@protocol TSDRepDirectLayerHosting;

@interface SXTangierTextRenderCollectorItem : NSObject
{
    BOOL _selectable;
    SXTextTangierFlowInfo *_flowInfo;
    SXTextTangierStorage *_storage;
    SXTextTangierFlowStorage *_flowStorage;
    NSString *_componentIdentifier;
    UIView<TSDRepDirectLayerHosting> *_directLayerHost;
    SXTextTangierTextLayout *_layout;
    SXTextTangierFlowLayout *_flowLayout;
    struct _NSRange _flowRange;
}

@property(retain, nonatomic) SXTextTangierFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) SXTextTangierTextLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UIView<TSDRepDirectLayerHosting> *directLayerHost; // @synthesize directLayerHost=_directLayerHost;
@property(readonly, nonatomic) BOOL selectable; // @synthesize selectable=_selectable;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, nonatomic) struct _NSRange flowRange; // @synthesize flowRange=_flowRange;
@property(readonly, nonatomic) SXTextTangierFlowStorage *flowStorage; // @synthesize flowStorage=_flowStorage;
@property(retain, nonatomic) SXTextTangierStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)flowLayoutWithICC:(id)arg1;
@property(readonly, nonatomic) SXTextTangierFlowInfo *flowInfo; // @synthesize flowInfo=_flowInfo;
- (void)appendToFlowStorage:(id)arg1;
- (void)updateWithLayout:(id)arg1;
- (id)initWithStorage:(id)arg1 layout:(id)arg2 directLayerHost:(id)arg3 selectable:(BOOL)arg4 componentIdentifier:(id)arg5;

@end

