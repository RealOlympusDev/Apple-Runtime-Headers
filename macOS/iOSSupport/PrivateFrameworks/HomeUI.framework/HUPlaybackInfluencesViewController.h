//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HFItemManagerDelegate-Protocol.h>
#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUPlaybackInfluencesItemManager, NSString;

@interface HUPlaybackInfluencesViewController : HUItemTableViewController <HFItemManagerDelegate, UITextViewDelegate, HUSwitchCellDelegate, HUAccessorySettingsDetailsViewControllerProtocol>
{
    HUPlaybackInfluencesItemManager *_playbackInfluencesItemManager;
}

@property(retain, nonatomic) HUPlaybackInfluencesItemManager *playbackInfluencesItemManager; // @synthesize playbackInfluencesItemManager=_playbackInfluencesItemManager;
- (void).cxx_destruct;
- (void)dismissPrivacyController;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessoryGroupItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

