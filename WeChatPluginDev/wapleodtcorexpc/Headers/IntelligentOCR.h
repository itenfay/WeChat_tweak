//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface IntelligentOCR : NSObject
{
    _Bool m_intelligentOCRInitSuccess;
    NSRecursiveLock *m_lock;
    void *ocr_api;
    void *ocr_api_NPU;
    _Bool m_intelligentOCRNPUInitSuccess;
    void *ocr_api_AMX;
    _Bool m_intelligentOCRAMXInitSuccess;
}

+ (struct Mat)rgbaMatFromUIImage:(id)arg1 bgColor:(id)arg2;
+ (id)generatePHashWithImage:(id)arg1;
- (void).cxx_destruct;
- (id)getIntelligentOCRPerfEveryDayId;
- (void)doReportIntelligentOCR;
- (id)getCodeClassify:(id)arg1;
- (_Bool)executeOcrForEmoticonWithImageData:(id)arg1 cpkey:(id)arg2 result:(id *)arg3 error:(id)arg4;
- (id)locateOcrTextPointInImage:(id)arg1 searchText:(id)arg2;
- (id)batchExecuteOcrText:(id)arg1 error:(id)arg2;
- (id)getOcrTextWithImage:(id)arg1;
- (id)getAMXOcrTextWithImage:(id)arg1;
- (id)getNPUOcrTextWithImage:(id)arg1;
- (_Bool)releaseXNetCache;
- (_Bool)checkOCRInitSuccess;
- (_Bool)checkModelFilesExist;
- (_Bool)isCanSupportAMX;
- (_Bool)isCanSupportNPU;
- (_Bool)checkNPUModel;
- (_Bool)isEnableDataReport;
- (void)InitModel;
- (void)dealloc;
- (id)init;

@end

