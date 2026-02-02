//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMDiskUsageScanConfig : NSObject
{
    _Bool _m_isDelete;
    _Bool _m_isDeleteUnknow;
    _Bool _m_isReportDelUnknow;
    _Bool _m_isQuickScan;
    _Bool _m_bUseCacheSize;
    _Bool _m_bUseSharedCache;
    _Bool _m_bSaveScanData;
    _Bool _m_bSuspendable;
    _Bool _m_bShouldPrintDetail;
    _Bool _isDeleteEmptyFolder;
    _Bool _isIgnoreCowFile;
    _Bool _isHighPriority;
    _Bool _isNewScanner;
    unsigned int _m_urgentLevel;
    NSArray *_regularExpressionsThatLogFilesToKV;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNewScanner; // @synthesize isNewScanner=_isNewScanner;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(nonatomic) _Bool isIgnoreCowFile; // @synthesize isIgnoreCowFile=_isIgnoreCowFile;
@property(nonatomic) _Bool isDeleteEmptyFolder; // @synthesize isDeleteEmptyFolder=_isDeleteEmptyFolder;
@property(retain, nonatomic) NSArray *regularExpressionsThatLogFilesToKV; // @synthesize regularExpressionsThatLogFilesToKV=_regularExpressionsThatLogFilesToKV;
@property(nonatomic) _Bool m_bShouldPrintDetail; // @synthesize m_bShouldPrintDetail=_m_bShouldPrintDetail;
@property(nonatomic) _Bool m_bSuspendable; // @synthesize m_bSuspendable=_m_bSuspendable;
@property(nonatomic) unsigned int m_urgentLevel; // @synthesize m_urgentLevel=_m_urgentLevel;
@property(nonatomic) _Bool m_bSaveScanData; // @synthesize m_bSaveScanData=_m_bSaveScanData;
@property(nonatomic) _Bool m_bUseSharedCache; // @synthesize m_bUseSharedCache=_m_bUseSharedCache;
@property(nonatomic) _Bool m_bUseCacheSize; // @synthesize m_bUseCacheSize=_m_bUseCacheSize;
@property(nonatomic) _Bool m_isQuickScan; // @synthesize m_isQuickScan=_m_isQuickScan;
@property(nonatomic) _Bool m_isReportDelUnknow; // @synthesize m_isReportDelUnknow=_m_isReportDelUnknow;
@property(nonatomic) _Bool m_isDeleteUnknow; // @synthesize m_isDeleteUnknow=_m_isDeleteUnknow;
@property(nonatomic) _Bool m_isDelete; // @synthesize m_isDelete=_m_isDelete;
- (id)description;
- (id)init;

@end

