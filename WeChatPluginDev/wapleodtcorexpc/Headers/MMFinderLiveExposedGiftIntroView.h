//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCoinButton, MMFinderLiveTaskId, NSString, UIButton, UILabel, UIView;

@interface MMFinderLiveExposedGiftIntroView
{
    unsigned int _wecoinCount;
    CDUnknownBlockType _cancelButtonClickedCallback;
    CDUnknownBlockType _confirmButtonClickedCallback;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    UILabel *_introTitleLabel;
    UIButton *_cancelButton;
    MMFinderLiveCoinButton *_confirmButton;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int wecoinCount; // @synthesize wecoinCount=_wecoinCount;
@property(retain, nonatomic) MMFinderLiveCoinButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *introTitleLabel; // @synthesize introTitleLabel=_introTitleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType confirmButtonClickedCallback; // @synthesize confirmButtonClickedCallback=_confirmButtonClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonClickedCallback; // @synthesize cancelButtonClickedCallback=_cancelButtonClickedCallback;
- (void)onCancelButtonClicked;
- (id)finderLiveTask;
- (double)contentViewHeight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 wecoinCount:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

