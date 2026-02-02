//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TXNewsContentLogicController
{
    _Bool m_bNeedIntroView;
}

- (_Bool)mainSwitch_shouldHandleAppmsg;
- (void)onEnterRoom;
- (void)deleteAllMsgByContact:(id)arg1;
- (_Bool)isNeedCached;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (_Bool)CanReportShowInfo;
- (void)initIntroView;
- (void)reloadIntroView;
- (void)OpenDetailInfo;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;

@end

