//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMIconItemView, MMIotNavigateInfo, MMUIActivityIndicatorView, MMUILabel, MsgToDeviceLogic, NSString, SSVMiniAppRedirectInfo, UIButton, UIImageView, UIStackView, WCDevice;

@interface SendToDeviceSheetView
{
    MMIconItemView *_itemView;
    UIButton *_sendButton;
    UIButton *_confirmButton;
    MMUIActivityIndicatorView *_loadingView;
    UIImageView *_doneImageView;
    UIImageView *_failureImageView;
    MMUILabel *_descLabel;
    NSString *_msgDescription;
    UIStackView *_ssvStackView;
    MMIotNavigateInfo *_navigateInfo;
    SSVMiniAppRedirectInfo *_ssvRedirectInfo;
    WCDevice *_device;
    MsgToDeviceLogic *_ilinkDeviceLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MsgToDeviceLogic *ilinkDeviceLogic; // @synthesize ilinkDeviceLogic=_ilinkDeviceLogic;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) SSVMiniAppRedirectInfo *ssvRedirectInfo; // @synthesize ssvRedirectInfo=_ssvRedirectInfo;
@property(retain, nonatomic) MMIotNavigateInfo *navigateInfo; // @synthesize navigateInfo=_navigateInfo;
@property(retain, nonatomic) UIStackView *ssvStackView; // @synthesize ssvStackView=_ssvStackView;
@property(retain, nonatomic) NSString *msgDescription; // @synthesize msgDescription=_msgDescription;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *failureImageView; // @synthesize failureImageView=_failureImageView;
@property(retain, nonatomic) UIImageView *doneImageView; // @synthesize doneImageView=_doneImageView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MMIconItemView *itemView; // @synthesize itemView=_itemView;
- (void)onClickSSVItem;
- (id)subTitleLabel:(id)arg1;
- (id)titleLabel:(id)arg1;
- (void)onMsgToDeviceSending:(id)arg1 progress:(double)arg2;
- (void)onMsgToDeviceFail:(id)arg1 type:(long long)arg2 errorInfo:(id)arg3;
- (void)onMsgToDeviceSuccessToSSV:(id)arg1;
- (void)onMsgToDeviceSuccessToWeApp:(id)arg1;
- (void)onMsgToDeviceSuccess:(id)arg1;
- (void)onWCLanDeviceForwardMsgFinishedWithErrCode:(int)arg1 toDevice:(id)arg2;
- (id)paramDicFromJsonString:(id)arg1;
- (void)onToDeviceMsgSent;
- (void)sendToDevice;
- (void)switchToFailureStateOfType:(long long)arg1 errorInfo:(id)arg2;
- (void)switchToFailureStateOfType:(long long)arg1;
- (void)switchToSuccessStateWithNavigateInfo:(id)arg1;
- (void)switchToLoadingState;
- (void)didMoveToSuperview;
- (void)dealloc;
- (void)initView;
- (void)initConfigs;
- (id)initWithDevice:(id)arg1 messageWrap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

