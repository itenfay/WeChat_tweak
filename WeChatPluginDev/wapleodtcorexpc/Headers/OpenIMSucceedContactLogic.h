//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseContact, CMessageWrap, MMTipsViewController, NSMutableDictionary, NSString, OpenIMContactVerifyLogic;
@protocol OpenIMSucceedContactLogicLogicDelegate;

@interface OpenIMSucceedContactLogic
{
    CMessageWrap *m_succeedContactMessageWrap;
    NSMutableDictionary *m_allSucceedContactDic;
    OpenIMContactVerifyLogic *m_openIMVerifyLogic;
    MMTipsViewController *m_succeedContactTipsView;
    CBaseContact *m_contact;
    NSString *_reportSessionId;
    id <OpenIMSucceedContactLogicLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <OpenIMSucceedContactLogicLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onOpenIMContactVerifyFail:(id)arg1;
- (void)onOpenIMContactVerifyDone:(id)arg1;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)arg1;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)arg1 andUsrName:(id)arg2 andMessageWrap:(id)arg3;
- (void)reportOpenIMReportWatchMessageRecordFromContact:(id)arg1 toContact:(id)arg2;
- (int)getReportSucceedStatus;
- (int)getReportUserStatus;
- (id)getReportSessionId;
- (void)OnNotAutoSucceedResponse:(id)arg1;
- (_Bool)NotAutoSucceedNetWorkWithAction:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)isNewSucceedContactWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (_Bool)isNewSucceedContact;
- (void)showNotSucceedContactAlertView;
- (void)startNotSucceedContact:(id)arg1 contact:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)parseSucceedContactXMLContent:(id)arg1;
- (void)touchImageButton:(id)arg1;
- (void)showSucceedContactWindow;
- (id)getSucceedContactInfoDicWithUsrName:(id)arg1 andMessageWrap:(id)arg2;
- (id)getSucceedContactInfoDic;
- (void)p_startSucceedContact:(id)arg1 contact:(id)arg2;
- (void)startSucceedContact:(id)arg1 contact:(id)arg2;
- (void)startSucceedContactOnce:(id)arg1 contact:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

