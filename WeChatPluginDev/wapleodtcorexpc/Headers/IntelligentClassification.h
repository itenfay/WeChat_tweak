//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface IntelligentClassification : NSObject
{
    _Bool m_intelligentClassificationInitSuccess;
    NSRecursiveLock *m_lock;
    struct XChatCls m_imglabel;
    _Bool m_intelligentClassificationGPUInitSuccess;
    struct XChatCls m_imglabelGPU;
    _Bool m_intelligentClassificationNPUInitSuccess;
    struct XChatCls m_imglabelNPU;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getClassificationWithImage:(id)arg1;
- (id)getIntelligentClsPerfEveryDayId;
- (void)doReportIntelligentClsPerfEveryDay:(id)arg1 inferenceCost:(float)arg2;
- (void)releaseInternalMemory;
- (id)searchSynonymLabelInfoDic:(id)arg1 useFuzzyQuery:(_Bool)arg2 isAlwaySimplifyChina:(_Bool)arg3;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getSynonymLabelIdListWithQuery:(id)arg1;
- (id)searchSynonymLabelInfoDic:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1 useFuzzyQuery:(_Bool)arg2 isAlwaySimplifyChina:(_Bool)arg3;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getLabelIdListWithQuery:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1;
- (id)getLabelNameWithLabelId:(unsigned int)arg1;
- (id)batchExecuteClassification:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassificationCPU:(id)arg1 error:(id)arg2;
- (void)decreaseCrashCount:(id)arg1;
- (id)batchExecuteClassificationGPU:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassificationNPU:(id)arg1 error:(id)arg2;
- (id)getNPUClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (id)getClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (_Bool)checkClassificationInitSuccess;
- (_Bool)checkModelFilesExist;
- (_Bool)isCanSupportAMX;
- (_Bool)isCanSupportNPU;
- (_Bool)isGPUIntelligentPattern;
- (_Bool)isCanSupportGPU;
- (void)InitModel;
- (id)init;

@end

