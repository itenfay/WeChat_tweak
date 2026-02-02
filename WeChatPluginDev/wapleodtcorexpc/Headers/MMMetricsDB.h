//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMetricsNetworkDB, MMMetricsRecordDB, MMMetricsRootDB, NSString;

@interface MMMetricsDB : NSObject
{
    NSString *m_rootPath;
    MMMetricsRootDB *m_rootDB;
    MMMetricsRecordDB *m_recordDB;
    MMMetricsNetworkDB *m_networkDB;
}

- (void).cxx_destruct;
- (_Bool)deleteAppRunningInfo:(id)arg1;
- (_Bool)insertOrUpdateAppRunningInfo:(id)arg1;
- (id)getAllAppRunningInfos;
- (void)prepareUpload;
- (void)vacuumCleaner;
- (void)deleteAllDB:(unsigned long long)arg1;
- (void)deleteRecordDB:(unsigned long long)arg1;
- (id)openNetworkDB:(unsigned long long)arg1;
- (id)openRecordDB:(unsigned long long)arg1;
- (id)currentNetworkDB;
- (id)currentRecordDB;
- (id)networkDBPath:(unsigned long long)arg1;
- (id)recordDBPath:(unsigned long long)arg1;
- (id)rootDBPath;
- (id)initWithRootPath:(id)arg1 launchTime:(unsigned long long)arg2;

@end

