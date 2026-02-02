//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCADQuestionStatItem;

@interface WCAdvertiseQuestionExpMgr
{
    NSString *lastReportItemId;
    WCADQuestionStatItem *adQuestItem;
}

- (void).cxx_destruct;
- (void)reportHasnotDoQuest:(id)arg1;
- (void)clearLastReportItemId;
- (id)getLastReportItemId;
- (void)tryReport;
- (void)tryReportWithAct:(unsigned int)arg1 MenuId:(id)arg2 Wording:(id)arg3;
- (id)parseFormatString:(id)arg1 translateMap:(id)arg2;
- (void)test;
- (id)getCurrLanguage;
- (void)statADQuestion:(id)arg1;
- (id)getADQuestionExp:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

