//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMDiskUsageConfigHandler : NSObject
{
    _Bool _m_isDelete;
    _Bool _m_isDeleteUnknow;
    _Bool _m_isReportDelUnknow;
    _Bool _m_isEnableReport;
    _Bool _m_isEnableScan;
    _Bool _m_isEnableDeleteEmptyFolder;
    _Bool _m_isEnablePreForceCleanTmp;
    unsigned int _m_timeIntervalBetweenReport;
    unsigned int _m_timeIntervalBetweenScan;
    unsigned int _m_timeForEachScan;
    unsigned int _m_timeForForceCleanTmp;
    unsigned int _m_timeIntervalBetweenEachScanFinish;
}

@property(nonatomic) unsigned int m_timeIntervalBetweenEachScanFinish; // @synthesize m_timeIntervalBetweenEachScanFinish=_m_timeIntervalBetweenEachScanFinish;
@property(nonatomic) _Bool m_isEnablePreForceCleanTmp; // @synthesize m_isEnablePreForceCleanTmp=_m_isEnablePreForceCleanTmp;
@property(nonatomic) _Bool m_isEnableDeleteEmptyFolder; // @synthesize m_isEnableDeleteEmptyFolder=_m_isEnableDeleteEmptyFolder;
@property(nonatomic) _Bool m_isEnableScan; // @synthesize m_isEnableScan=_m_isEnableScan;
@property(nonatomic) _Bool m_isEnableReport; // @synthesize m_isEnableReport=_m_isEnableReport;
@property(nonatomic) _Bool m_isReportDelUnknow; // @synthesize m_isReportDelUnknow=_m_isReportDelUnknow;
@property(nonatomic) _Bool m_isDeleteUnknow; // @synthesize m_isDeleteUnknow=_m_isDeleteUnknow;
@property(nonatomic) _Bool m_isDelete; // @synthesize m_isDelete=_m_isDelete;
@property(nonatomic) unsigned int m_timeForForceCleanTmp; // @synthesize m_timeForForceCleanTmp=_m_timeForForceCleanTmp;
@property(nonatomic) unsigned int m_timeForEachScan; // @synthesize m_timeForEachScan=_m_timeForEachScan;
@property(nonatomic) unsigned int m_timeIntervalBetweenScan; // @synthesize m_timeIntervalBetweenScan=_m_timeIntervalBetweenScan;
@property(nonatomic) unsigned int m_timeIntervalBetweenReport; // @synthesize m_timeIntervalBetweenReport=_m_timeIntervalBetweenReport;
- (_Bool)isDataValid;
- (id)description;
- (void)loadConfigFromX;
- (id)init;

@end

