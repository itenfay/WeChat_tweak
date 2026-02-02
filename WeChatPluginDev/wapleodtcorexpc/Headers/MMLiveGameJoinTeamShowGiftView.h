//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGameTeamInfo, MMFinderLiveTaskId, MMUIImageView, MMUILabel, NSString, NSURL, UIView;

@interface MMLiveGameJoinTeamShowGiftView
{
    _Bool _showReddot;
    _Bool _checkStatsShowed;
    _Bool _touchDown;
    UIView *_backgroundView;
    MMUIImageView *_iconView;
    MMUILabel *_wordingLable;
    MMUIImageView *_rightView;
    UIView *_redView;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveGameTeamInfo *_gameTeamInfo;
    NSURL *_iconUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) MMFinderLiveGameTeamInfo *gameTeamInfo; // @synthesize gameTeamInfo=_gameTeamInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) MMUIImageView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) MMUILabel *wordingLable; // @synthesize wordingLable=_wordingLable;
@property(retain, nonatomic) MMUIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onTouchUpOutside;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)sizeToFit;
- (void)updateGameInfo:(id)arg1 gameTeamInfo:(id)arg2;
- (void)layoutUI;
- (void)fetchGameTeamGiftStatus;
- (_Bool)checkStatsShow;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

