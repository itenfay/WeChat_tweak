//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface GameLifeMsgContentLogicController
{
    _Bool shouldShowSendPic;
    _Bool shouldShowCamera;
    _Bool shouldShowEmotionBoard;
    _Bool shouldShowAttachButton;
    NSDictionary *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *reportInfo; // @synthesize reportInfo=_reportInfo;
@property _Bool shouldShowAttachButton; // @synthesize shouldShowAttachButton;
@property _Bool shouldShowEmotionBoard; // @synthesize shouldShowEmotionBoard;
@property _Bool shouldShowCamera; // @synthesize shouldShowCamera;
@property _Bool shouldShowSendPic; // @synthesize shouldShowSendPic;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (void)reportJumpToChatInfoView;
- (void)onGameLifeContactUpdate:(id)arg1;
- (void)onGameLifeProfileClearAllMsg;
- (void)onInputToolWeAppButtonClickedWithItem:(id)arg1;
- (void)OnClickAttachmentButton:(_Bool)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (_Bool)IsShowAttachmentButtonRedDot;
- (id)getInputToolWeAppOpEntryAr;
- (id)getMsgSendOpEntry;
- (void)showPermissionAlert:(id)arg1;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (_Bool)canPasteImage;
- (_Bool)canSendCaptureImage;
- (void)ViewWillAppear;
- (void)onWillPushFromNavigationController;
- (void)onPopFromNavigationController;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (_Bool)isHighSurrogate:(unsigned short)arg1;
- (id)getShortNickName:(id)arg1 isWithTag:(_Bool)arg2;
- (id)getInputToolViewDisplayName:(id)arg1 tag:(id)arg2 accountType:(unsigned int)arg3 inputViewWidth:(unsigned int)arg4;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)getSubTitle;
- (_Bool)CanSendEmoticonMessage;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendImageMsg:(id)arg1;
- (void)UnRegister;
- (void)Register;
- (void)configWithSessionId:(id)arg1;
- (id)initWithSessionId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

