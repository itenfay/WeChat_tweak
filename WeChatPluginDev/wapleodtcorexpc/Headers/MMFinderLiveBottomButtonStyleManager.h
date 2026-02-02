//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveButtonInfo, MMFinderLiveBottomButtonAnimationItem, MMFinderLiveBottomButtonBackgroundColorConfig, MMLiveResourceFetcherLegacyApiAdapter, MMTimer, NSMutableArray, NSString;
@protocol MMFinderLiveBottomButtonStyleManagerDelegate;

@interface MMFinderLiveBottomButtonStyleManager : NSObject
{
    id <MMFinderLiveBottomButtonStyleManagerDelegate> _delegate;
    MMFinderLiveBottomButtonBackgroundColorConfig *_colorConfig;
    MMLiveResourceFetcherLegacyApiAdapter *_downloadMgr;
    FinderLiveButtonInfo *_currentButtonInfo;
    NSMutableArray *_pendingAnimationItems;
    MMFinderLiveBottomButtonAnimationItem *_playingAnimationItem;
    MMTimer *_animationCountdownTimer;
    NSString *_liveShoppingButtonBubblePAGPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liveShoppingButtonBubblePAGPath; // @synthesize liveShoppingButtonBubblePAGPath=_liveShoppingButtonBubblePAGPath;
@property(retain, nonatomic) MMTimer *animationCountdownTimer; // @synthesize animationCountdownTimer=_animationCountdownTimer;
@property(retain, nonatomic) MMFinderLiveBottomButtonAnimationItem *playingAnimationItem; // @synthesize playingAnimationItem=_playingAnimationItem;
@property(retain, nonatomic) NSMutableArray *pendingAnimationItems; // @synthesize pendingAnimationItems=_pendingAnimationItems;
@property(retain, nonatomic) FinderLiveButtonInfo *currentButtonInfo; // @synthesize currentButtonInfo=_currentButtonInfo;
@property(retain, nonatomic) MMLiveResourceFetcherLegacyApiAdapter *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) MMFinderLiveBottomButtonBackgroundColorConfig *colorConfig; // @synthesize colorConfig=_colorConfig;
@property(nonatomic) __weak id <MMFinderLiveBottomButtonStyleManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)zipPath:(id)arg1;
- (id)cachePath:(id)arg1;
- (id)cacheFolder;
- (void)cleanUnusedResources;
- (void)refreshResourceUsageAtPath:(id)arg1;
- (void)onAnimationTimerFired;
- (void)scheduleAnimationTimerIfNeeded;
- (void)addCurrentAnimationAgainIfLoop;
- (void)tryPlayPendingAnimation;
- (void)onAnimationDownloadSuccess:(id)arg1 localFilePath:(id)arg2;
- (void)onAnimationDownloadFailed:(id)arg1;
- (void)handleButtonIconInfoResReady:(id)arg1 iconPath:(id)arg2 bgPath:(id)arg3;
- (_Bool)isString:(id)arg1 equalToOther:(id)arg2;
- (void)delayShoppingButtonLoopAnimations:(unsigned long long)arg1;
- (void)addNewAnimationInfos:(id)arg1;
- (id)updateLocalLoopsWithRemotes:(id)arg1;
- (void)loadButtonIconAndBGResource:(id)arg1;
- (void)handleButtonInfo:(id)arg1;
- (void)reloadAllButtonBGAndIcon;
- (void)reloadButtonBGAndIconWithType:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

