//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView;

@interface MassSendContentLogicController
{
    UIImageView *_toolView;
}

- (void).cxx_destruct;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onDeleteMsg:(id)arg1;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)onTopBarFrameChanged;
- (void)onPopFromNavigationController;
- (void)onMassSendSendAgain:(id)arg1;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)onNewMassSend:(id)arg1;
- (void)StopPlaying;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)handleToolView;
- (void)initToolView;
- (void)OpenDetailInfo;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)Register;
- (void)UnRegister;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

