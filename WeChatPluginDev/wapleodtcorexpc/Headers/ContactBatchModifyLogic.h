//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;
@protocol ContactBatchModifyLogicDelegate;

@interface ContactBatchModifyLogic
{
    NSMutableArray *m_arrBatchModifyRequest;
    NSMutableArray *m_arrFailBatchModifyInfo;
    NSMutableDictionary *m_dicFailBatchModifyRetry;
    unsigned int m_eventID;
    NSMutableArray *m_arrBatchSnsNointerestingModify;
    NSMutableArray *m_arrBatchSnsNointerestingModifyOnceNumber;
    NSMutableArray *m_arrFailBatchSnsNointerestingModify;
    _Bool m_isAddBatchSnsNointeresting;
    id <ContactBatchModifyLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactBatchModifyLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)handleSnsNointerestingResponse:(_Bool)arg1;
- (void)onWCGroupRemoveMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)onWCGroupAddMemberReturn:(_Bool)arg1 group:(id)arg2;
- (void)BatchModContactSnsNointerestingTypeNetWork:(id)arg1;
- (void)CheckSnsNointerestingTypeQueue;
- (void)batchModContactSnsNointerestingTypeWithContantctAr:(id)arg1 isBatchAdd:(_Bool)arg2;
- (void)OnBatchModContactTypeResponse:(id)arg1;
- (_Bool)BatchModContactTypeNetWork:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCurrentFailModContact:(id)arg1;
- (void)HandleAllFailModContact:(id)arg1;
- (void)HandleModContactResponse:(id)arg1;
- (void)CheckQueue;
- (void)batchModContactTypeWithAddContantctAr:(id)arg1 deleteContantctAr:(id)arg2 modContactType:(unsigned int)arg3;
- (void)clearAllData;
- (void)dealloc;
- (unsigned long long)getMaxBatchOnceNumber;

@end

