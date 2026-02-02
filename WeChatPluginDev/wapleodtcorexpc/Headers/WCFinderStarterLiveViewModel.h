//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLiveStarteAudioModeViewModel, WCFinderLiveStarteGameModeViewModel, WCFinderLiveStartePublicModel, WCFinderLiveStarteVideoModeViewModel;

@interface WCFinderStarterLiveViewModel : NSObject
{
    WCFinderLiveStarteVideoModeViewModel *_videoModeViewModel;
    WCFinderLiveStarteAudioModeViewModel *_audioModeViewModel;
    WCFinderLiveStarteGameModeViewModel *_gameModeViewModel;
    WCFinderLiveStartePublicModel *_publicModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStartePublicModel *publicModel; // @synthesize publicModel=_publicModel;
@property(retain, nonatomic) WCFinderLiveStarteGameModeViewModel *gameModeViewModel; // @synthesize gameModeViewModel=_gameModeViewModel;
@property(retain, nonatomic) WCFinderLiveStarteAudioModeViewModel *audioModeViewModel; // @synthesize audioModeViewModel=_audioModeViewModel;
@property(retain, nonatomic) WCFinderLiveStarteVideoModeViewModel *videoModeViewModel; // @synthesize videoModeViewModel=_videoModeViewModel;
- (id)currentLiveModeViewModel;
- (id)init;
- (void)startLotteryViewControllerSaveLottery:(id)arg1;
- (void)lotteryBodyClick:(id)arg1;
- (void)onLiveLotteryRecordClick;
- (void)deleteLotteryClick:(id)arg1 session:(long long)arg2;
- (void)createLotteryClick;
- (id)tryGetAddLotteryPanel;
- (void)showLotteryView;
- (id)getCurrentViewController;
- (void)fetchLotteryArray:(CDUnknownBlockType)arg1;
- (void)showStartLotteryVC;
- (void)hideCreateLotteryView;
- (void)showCreateLotteryView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

