//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveAudioRoomMicAudioAnimationView, MMFinderLiveKTVSingerUserInfo, MMFinderLiveTask, MMLiveTaskId, MMUILabel, NSString, WCFinderHeadImageView;

@interface MMFinderLiveKTVSingerAudioUserView : UIView
{
    MMFinderLiveKTVSingerUserInfo *_userInfo;
    MMLiveTaskId *_taskId;
    WCFinderHeadImageView *_headImageView;
    MMFinderLiveAudioRoomMicAudioAnimationView *_waveAnimationView;
    MMUILabel *_nameLabel;
    MMUILabel *_heatLabel;
}

+ (double)preferExtraHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *waveAnimationView; // @synthesize waveAnimationView=_waveAnimationView;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveKTVSingerUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveKTVNoteReached:(_Bool)arg1 singerUserId:(id)arg2 taskId:(id)arg3;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updateSingerUserInfo:(id)arg1;
- (void)updateIsSinging:(_Bool)arg1;
- (_Bool)isNickAndHeatNeedShow;
- (void)onSingingStateChanged:(long long)arg1;
- (void)updateHeatLabelText;
- (void)updateNameLabelText;
- (void)updateHeatLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateNameLabelOrigin;
- (void)layoutNameLabel;
- (void)layoutWaveAnimationView;
- (void)layoutHeadImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithSingerUserInfo:(id)arg1 taskId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

