//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDPathSource.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDRealignablePathSource-Protocol.h>

@class NSArray, TSDBezierNode;

__attribute__((visibility("hidden")))
@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing>
{
    NSArray *mSubpaths;
    unsigned long long mActiveSubpath;
    _Bool mHasLockedFlipTransform;
    struct CGAffineTransform mLockedFlipTransform;
}

+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSourceWithPathSource:(id)arg1;
+ (id)editableBezierPathSource;
@property(nonatomic) unsigned long long activeSubpath; // @synthesize activeSubpath=mActiveSubpath;
@property(copy, nonatomic) NSArray *subpaths; // @synthesize subpaths=mSubpaths;
- (void).cxx_destruct;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)closePath;
- (void)smoothCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;
- (void)lineToPoint:(struct CGPoint)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
@property(retain, nonatomic) NSArray *nodeTypes;
@property(readonly, nonatomic) const struct CGPath *subpathForSelection;
- (void)cutAtSelectedNodes;
- (_Bool)canCutAtSelectedNodes;
- (void)splitSelectedNodes;
- (void)splitSelectedEdges;
- (id)splitEdge:(long long)arg1 at:(double)arg2 fromSubpath:(long long)arg3;
- (void)deleteSelectedEdges;
- (void)closeSelectedNodes;
- (_Bool)canCloseSelectedNodes;
- (void)connectSelectedNodes;
- (_Bool)canConnectSelectedNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(_Bool *)arg1 andSecondPathFirstNode:(_Bool *)arg2;
- (void)selectSubpathForNode:(id)arg1 toggle:(_Bool)arg2;
@property(nonatomic, getter=isClosed) _Bool closed;
@property(readonly, nonatomic) _Bool isOpen;
- (void)smoothAllNodes;
- (void)smoothNode:(id)arg1;
- (void)sharpenAllNodes;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
@property(readonly, nonatomic) struct CGRect nodeBounds;
- (double)distanceToPoint:(struct CGPoint)arg1 subpathIndex:(unsigned long long *)arg2 elementIndex:(unsigned long long *)arg3 tValue:(double *)arg4 threshold:(double)arg5;
- (id)bezierNodeUnderPoint:(struct CGPoint)arg1 withTransform:(struct CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long *)arg4;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(_Bool)arg1;
@property(readonly, nonatomic) _Bool deletingSelectedNodesWillDeleteShape;
@property(readonly, nonatomic) _Bool canDeleteSelectedNodes;
@property(readonly, nonatomic) _Bool isCompound;
- (void)removeNode:(id)arg1;
@property(readonly, nonatomic) _Bool allNodesSelected;
@property(readonly, nonatomic) _Bool hasSelectedNode;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint)arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint)arg1;
@property(readonly, nonatomic) TSDBezierNode *lastNode;
@property(readonly, nonatomic) TSDBezierNode *firstNode;
- (id)nodeAfterNode:(id)arg1;
- (id)nodePriorToNode:(id)arg1;
- (void)removeLastNode;
- (void)addNode:(id)arg1;
- (void)alignToOrigin;
- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (Class)preferredRepClass;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)pathFlipTransform;
- (void)beginNewSubpath;
- (void)setLockedFlipTransform:(_Bool)arg1;
- (void)reverseDirection;
@property(copy, nonatomic) NSArray *nodes;
- (void)setBezierPath:(id)arg1;
- (void)convertToHobby;
- (struct CGPath *)pathWithoutFlips;
- (id)bezierPathWithoutFlips;
- (_Bool)isCircular;
- (_Bool)isRectangular;
@property(readonly, nonatomic) _Bool closeIfEndpointsAreEqual;
- (_Bool)isEqualWithStrictComparison:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)addTemporarySmoothNodes;
- (void)updateSmoothNodes;
- (void)morphWithMorphInfo:(id)arg1;
-     // Error parsing type: v24@0:8^{PathSourceArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{PointPathSourceArchive}^{ScalarPathSourceArchive}^{BezierPathSourceArchive}^{CalloutPathSourceArchive}^{ConnectionLinePathSourceArchive}^{EditableBezierPathSourceArchive}BB}16, name: saveToArchive:
-     // Error parsing type: @24@0:8r^{PathSourceArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{PointPathSourceArchive}^{ScalarPathSourceArchive}^{BezierPathSourceArchive}^{CalloutPathSourceArchive}^{ConnectionLinePathSourceArchive}^{EditableBezierPathSourceArchive}BB}16, name: initWithArchive:

@end

