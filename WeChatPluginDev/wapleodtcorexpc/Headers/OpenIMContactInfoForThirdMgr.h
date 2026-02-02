//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ContactSearchLogic, NSString, OpenIMContactInfoForThirdReqFetchContext;

@interface OpenIMContactInfoForThirdMgr
{
    ContactSearchLogic *m_contactSearchLogic;
    OpenIMContactInfoForThirdReqFetchContext *m_reqContext;
}

- (void).cxx_destruct;
- (void)reportShowOpenIMProfileForThirdLogWithAction:(unsigned int)arg1 allowResultType:(unsigned int)arg2 sourceScene:(unsigned int)arg3;
- (void)onContactSearchLogicFailForThird:(id)arg1 extInfo:(id)arg2;
- (void)onContactSearchLogicDoneForThird:(id)arg1 thirdFromScene:(unsigned int)arg2 spamWording:(id)arg3 extInfo:(id)arg4;
- (void)handleOpenIMContactForThirdWithDic:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 spamContext:(id)arg4 context:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFail:(CDUnknownBlockType)arg7;
- (void)handleOpenIMContactForThirdWithUrl:(id)arg1 viewController:(id)arg2 scene:(unsigned int)arg3 spamContext:(id)arg4 context:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFail:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

