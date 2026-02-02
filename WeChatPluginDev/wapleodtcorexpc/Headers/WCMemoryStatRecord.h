//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MatrixMemoryFile, NSLock, NSString, WCMemoryStatRecordBaseInfo;

@interface WCMemoryStatRecord : NSObject
{
    _Bool m_isCurrentRun;
    _Bool m_isMemoryLogging;
    NSString *m_basePath;
    MatrixMemoryFile *m_memoryFile;
    WCMemoryStatRecordBaseInfo *m_baseInfo;
    shared_ptr_c96e8858 m_vmRegions;
    NSLock *m_infoLock;
    NSLock *m_dumpingLock;
}

+ (id)loadRecordByPath:(id)arg1;
+ (id)newRecordForCurrentRun;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)memoryDataPath;
- (id)recordInfoPath;
- (id)recordBasePath;
- (void)initPaths;
- (_Bool)loadFromFile;
- (_Bool)saveBaseInfo;
- (_Bool)loadBaseInfo;
- (void)generateLeaksReportWithCustomInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)generateAllocationsReportWithCustomInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dumpVMRegions;
- (_Bool)isMemoryDataValid;
- (void)setMemoryDataInvalid;
- (void)onMemoryLoggingStop;
- (void)onMemoryLoggingStart;
- (id)recordID;
- (unsigned long long)launchTime;
- (void)setVMRegions:(shared_ptr_c96e8858)arg1;
- (void)setUserScene:(id)arg1;
- (void)initMemoryFile;
- (id)initWithPath:(id)arg1;
- (id)initWithBaseInfo:(id)arg1;

@end

