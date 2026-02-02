//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMUserDataOperateMgr
{
    NSArray *m_arrCombineReportForUserDataType;
    unsigned int m_oneHadExecuteNumber;
    NSObject<OS_dispatch_queue> *m_taskQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *m_taskQueue; // @synthesize m_taskQueue;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUploadUserData:(id)arg1;
- (_Bool)sendUploadUserDataRequest:(id)arg1 timesTamp:(unsigned long long)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getUploadUserDataId;
- (_Bool)checkUploadUserData;
- (void)reportUserDataOperateRecord;
- (void)asynReportUserDataOperateRecord;
- (_Bool)checkHadReportUserDataOperateRecord;
- (void)insertUserDataOperateItemListToDB:(id)arg1;
- (void)batchRecordOperateUserData:(id)arg1;
- (void)recordOperateUserData:(unsigned int)arg1 dataType:(unsigned int)arg2;
- (void)initData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

