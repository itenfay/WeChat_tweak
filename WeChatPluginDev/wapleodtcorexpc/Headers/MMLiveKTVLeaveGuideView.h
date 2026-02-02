//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUILabel, MMWebImageView, NSString, UIButton;

@interface MMLiveKTVLeaveGuideView
{
    unsigned int _scene;
    CDUnknownBlockType _ktvLeaveGuideBlock;
    CDUnknownBlockType _ktvMinimizeLiveGuideBlock;
    CDUnknownBlockType _ktvReturnGuideBlock;
    MMFinderLiveTaskId *_taskId;
    MMWebImageView *_micImageView;
    MMUILabel *_titleLabel;
    UIButton *_returnBtn;
    UIButton *_leaveBtn;
    MMUILabel *_minimizeLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *minimizeLabel; // @synthesize minimizeLabel=_minimizeLabel;
@property(retain, nonatomic) UIButton *leaveBtn; // @synthesize leaveBtn=_leaveBtn;
@property(retain, nonatomic) UIButton *returnBtn; // @synthesize returnBtn=_returnBtn;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *micImageView; // @synthesize micImageView=_micImageView;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType ktvReturnGuideBlock; // @synthesize ktvReturnGuideBlock=_ktvReturnGuideBlock;
@property(copy, nonatomic) CDUnknownBlockType ktvMinimizeLiveGuideBlock; // @synthesize ktvMinimizeLiveGuideBlock=_ktvMinimizeLiveGuideBlock;
@property(copy, nonatomic) CDUnknownBlockType ktvLeaveGuideBlock; // @synthesize ktvLeaveGuideBlock=_ktvLeaveGuideBlock;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (void)onClickedMinimize;
- (void)onClickedReturn;
- (void)onClickedLeave;
- (unsigned long long)reportScene;
- (unsigned long long)reportStatus;
- (id)liveTask;
- (void)updateDetailViewHeight;
- (void)showWithAnimated:(_Bool)arg1;
- (void)layoutUI;
- (void)setupUI;
- (void)pageSheetDidRotation;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

