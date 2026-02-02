//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AddEmoticonWrap, MMSnackBar, NSString, StoreEmotionExchangeEmotionPackCgi;
@protocol MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate;

@interface EmoticonCustomManageAddLogic
{
    _Bool m_isAdding;
    _Bool m_isExchanging;
    _Bool m_isJustExchange;
    AddEmoticonWrap *m_emoticonWrap;
    StoreEmotionExchangeEmotionPackCgi *m_exchangePackCgi;
    _Bool _newSnackStyle;
    _Bool _disableAutoShowSucToast;
    NSString *_loadingText;
    id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> _delegate;
    MMSnackBar *_snackBar;
}

+ (id)typeNumberForImageData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMSnackBar *snackBar; // @synthesize snackBar=_snackBar;
@property(nonatomic) _Bool disableAutoShowSucToast; // @synthesize disableAutoShowSucToast=_disableAutoShowSucToast;
@property(nonatomic) _Bool newSnackStyle; // @synthesize newSnackStyle=_newSnackStyle;
@property(nonatomic) __weak id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
- (void)onStickyBackupEmoticonFailed:(id)arg1;
- (void)onStickyBackupEmoticonOK:(id)arg1;
- (void)onAddBackupEmoticonFailed:(id)arg1 reason:(unsigned long long)arg2 remoteErrMsg:(id)arg3;
- (void)onAddBackupEmoticonOK:(id)arg1 addEmoticonWrap:(id)arg2;
- (void)onAddBackupEmoticonPendingUpload:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)hideSnackBar;
- (void)showSavedSnackBar;
- (void)showLoadingSnackBar;
- (void)tryDownloadThumbImage;
- (void)showJumpDetailTipsWithWording:(id)arg1;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)showExtendLimitTipsWithWording:(id)arg1 ofEmoticonType:(unsigned long long)arg2;
- (void)showSavedTips;
- (_Bool)cancelAddEmoticonWithWrap:(id)arg1;
- (_Bool)startExchangePackForSendingWithWrap:(id)arg1;
- (_Bool)startAddEmoticonWithWrap:(id)arg1 NeedCheckTotalCountLimit:(_Bool)arg2;
- (_Bool)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (_Bool)startAddEmoticonWithWrap:(id)arg1;
- (_Bool)checkTotalCountLimitWithType:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isAdding;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

