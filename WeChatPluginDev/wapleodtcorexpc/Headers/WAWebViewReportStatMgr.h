//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSString, WAReportOuterMenuActionItem, WaReportMessageVideoActionItem;

@interface WAWebViewReportStatMgr
{
    NSMutableDictionary *m_outActionTimestampDict;
    NSMutableArray *m_mutiSelectMsgList;
    WAReportOuterMenuActionItem *m_mutiSelectBaseItem;
    WaReportMessageVideoActionItem *_waMessageVideoReport;
    NSMutableDictionary *m_menuActionTimestampDict;
    NSMutableDictionary *m_apiActionDict;
    _Bool _isOpenDebugState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isOpenDebugState; // @synthesize isOpenDebugState=_isOpenDebugState;
@property(retain, nonatomic) WAReportOuterMenuActionItem *m_mutiSelectBaseItem; // @synthesize m_mutiSelectBaseItem;
- (_Bool)getJSApiEventAction:(unsigned int)arg1 withActionItem:(id)arg2 appId:(id)arg3 needRemoveEventAction:(_Bool)arg4;
- (void)registerJSApiAction:(id)arg1 callid:(unsigned int)arg2 appId:(id)arg3;
- (_Bool)hasJSApiEventAction:(unsigned int)arg1 appId:(id)arg2;
- (_Bool)needReportJSApiAction:(id)arg1;
- (id)menuActionItemFromMgr:(unsigned long long)arg1;
- (void)registWebMenuAction:(unsigned long long)arg1;
- (id)init;
- (id)waMessageVideoShareAction;
- (void)registWaMessageVideoShareAction:(id)arg1;
- (void)reportOutMenuActionOnMutiSelectMsgResult:(unsigned long long)arg1 contacts:(id)arg2;
- (void)registOutMenuActionOnMutiSelectMsgArray:(id)arg1;
- (id)outActionItemFromMgr:(unsigned long long)arg1;
- (void)registOutMenuAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

