//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewTextAttachmentCell.h>

@interface NSImageKitViewTextAttachmentCell : NSViewTextAttachmentCell
{
}

- (void)adjustView:(id)arg1 frame:(struct CGRect)arg2 forView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)addView:(id)arg1 frame:(struct CGRect)arg2 toView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewForCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2;
- (id)helperForView:(id)arg1 layoutManager:(id)arg2 characterIndex:(unsigned long long)arg3;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (Class)_imageKitViewClass;
- (void)_loadImageKit;

@end

