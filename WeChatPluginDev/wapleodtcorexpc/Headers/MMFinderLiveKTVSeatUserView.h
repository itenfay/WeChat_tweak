//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveAudioRoomMicAudioAnimationView, MMFinderLiveConnectMicUser, MMFinderLiveTask, MMLiveTaskId, MMUILabel, NSString, WCFinderContact, WCFinderHeadImageView;

@interface MMFinderLiveKTVSeatUserView : UIView
{
    _Bool _isTalking;
    _Bool _isPreparing;
    int _score;
    MMLiveTaskId *_taskId;
    MMFinderLiveConnectMicUser *_userInfo;
    WCFinderHeadImageView *_userHeadImageView;
    MMFinderLiveAudioRoomMicAudioAnimationView *_waveAnimationView;
    MMUILabel *_tagLabel;
    MMUILabel *_nickNameLabel;
    MMUILabel *_heatLabel;
}

+ (double)preferHeight;
+ (double)preferWidth;
- (void).cxx_destruct;
@property(nonatomic) int score; // @synthesize score=_score;
@property(nonatomic) _Bool isPreparing; // @synthesize isPreparing=_isPreparing;
@property(nonatomic) _Bool isTalking; // @synthesize isTalking=_isTalking;
@property(retain, nonatomic) MMUILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMUILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) MMFinderLiveAudioRoomMicAudioAnimationView *waveAnimationView; // @synthesize waveAnimationView=_waveAnimationView;
@property(retain, nonatomic) WCFinderHeadImageView *userHeadImageView; // @synthesize userHeadImageView=_userHeadImageView;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onLiveKTVSeatUserUIChange:(unsigned long long)arg1 taskId:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) WCFinderContact *finderContact;
- (void)checkIsTalking;
- (void)updateScore:(int)arg1;
- (void)updateIsPreparing:(_Bool)arg1;
- (void)updateUserInfo:(id)arg1;
- (_Bool)isCurrentTalking;
- (void)updateNickNameLabelText;
- (void)updateHeatLabelText;
- (void)updateTagLabelText;
- (void)refreshTagLabelUI;
- (_Bool)isUserAnchor;
- (void)updateHeatLabelOrigin;
- (void)layoutHeatLabel;
- (void)updateNickNameLabelOrigin;
- (void)layoutNickNameLabel;
- (void)updateTagLabelOrigin;
- (void)layoutTagLabel;
- (void)layoutWaveAnimationView;
- (void)layoutUserHeadImageView;
- (id)getUserAvatarView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)unRegisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

