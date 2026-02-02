//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveKTVSingerUserInfo, MMFinderLiveTask, MMLiveTaskId, MMUILabel, NSString, WCFinderHeadImageView;

@interface MMFinderLiveKTVSingerVideoUserInfoView : UIView
{
    MMFinderLiveKTVSingerUserInfo *_userInfo;
    MMLiveTaskId *_taskId;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nameLabel;
    MMUILabel *_heatLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *heatLabel; // @synthesize heatLabel=_heatLabel;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveKTVSingerUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (_Bool)isNickAndHeatNeedShow;
- (void)onSingingStateChanged:(long long)arg1;
- (void)updateHeatLabelText;
- (void)updateNameLabelText;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updateSingerUserInfo:(id)arg1;
- (void)layoutHeatLabel;
- (void)layoutNameLabel;
- (void)layoutHeadImageView;
- (void)setFrame:(struct CGRect)arg1;
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

