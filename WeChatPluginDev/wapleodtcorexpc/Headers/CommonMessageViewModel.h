//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PatRevokeTipsView;

@interface CommonMessageViewModel
{
    unsigned long long m_bgBubbleType;
    unsigned long long m_maskBubbleType;
    _Bool m_isShowChatRoomDisplayName;
    _Bool m_isChatRoomOwnerOrAdmin;
    _Bool _canShowSendingView;
    unsigned long long _shakeHeadAnimationType;
    double _shakeHeadAnimationProgress;
    PatRevokeTipsView *_patRevokeTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PatRevokeTipsView *patRevokeTipsView; // @synthesize patRevokeTipsView=_patRevokeTipsView;
@property(nonatomic) double shakeHeadAnimationProgress; // @synthesize shakeHeadAnimationProgress=_shakeHeadAnimationProgress;
@property(nonatomic) unsigned long long shakeHeadAnimationType; // @synthesize shakeHeadAnimationType=_shakeHeadAnimationType;
@property(nonatomic) _Bool canShowSendingView; // @synthesize canShowSendingView=_canShowSendingView;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (struct CGSize)measure:(struct CGSize)arg1;
- (_Bool)shouldShowWeAppEntranceTail;
- (id)customJumpAppId;
- (_Bool)hasSetRoomTodoFlag;
- (_Bool)shouldShowRoomTodoView;
- (id)maskBubbleInfo;
- (id)bgBubbleInfo;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (_Bool)isShowAppMessageBlockButton;
- (id)sourceIconUrlString;
- (id)sourceTag;
- (id)sourceIcon;
- (double)sourceTitleMaxWidth;
- (id)sourceTitleColor;
- (id)sourceTitle;
- (_Bool)isSupportSourceViewBottomClick;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (_Bool)checkIsChatRoomOwnerOrAdmin;
- (_Bool)calIsShowChatRoomDisplayName;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (id)chatRoomTextStateIconDescription;
- (void)updateChatContact:(id)arg1;
- (id)getReferImage;
- (id)getReferImageViewWithSize:(struct CGSize)arg1;
- (_Bool)hasReferImage;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)onClickRevokeTipsWithChatName:(id)arg1;
- (void)onPatRevokeTipsViewHidden;
- (void)tryHiddenPathRevokeTipsWhenCellDisappear;
- (void)showPatRevokeTipsWithHeadImageView:(id)arg1;
- (double)getNavigationBarBottomInWindow;
- (double)getPatSystemMessageAddHeight:(id)arg1;
- (double)getVCVisableHeight:(double)arg1;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)downloadThumbImageIfNeed;
@property(readonly, nonatomic) unsigned int thumbDownloadStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

