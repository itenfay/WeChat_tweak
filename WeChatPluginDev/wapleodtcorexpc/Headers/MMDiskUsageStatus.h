//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMDiskUsageStatus : NSObject
{
    unsigned int _m_lastStartScanTime;
    unsigned int _m_lastReportTime;
    unsigned int _m_lastScanFinishTime;
    unsigned int _m_lastCleanTmpTime;
}

+ (id)loadStausDataFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_m_lastCleanTmpTime;
+ (void)PBArrayAdd_m_lastScanFinishTime;
+ (void)PBArrayAdd_m_lastReportTime;
+ (void)PBArrayAdd_m_lastStartScanTime;
@property(nonatomic) unsigned int m_lastCleanTmpTime; // @synthesize m_lastCleanTmpTime=_m_lastCleanTmpTime;
@property(nonatomic) unsigned int m_lastScanFinishTime; // @synthesize m_lastScanFinishTime=_m_lastScanFinishTime;
@property(nonatomic) unsigned int m_lastReportTime; // @synthesize m_lastReportTime=_m_lastReportTime;
@property(nonatomic) unsigned int m_lastStartScanTime; // @synthesize m_lastStartScanTime=_m_lastStartScanTime;
@property(readonly, copy) NSString *description;
- (_Bool)saveStatusDataToFile;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

