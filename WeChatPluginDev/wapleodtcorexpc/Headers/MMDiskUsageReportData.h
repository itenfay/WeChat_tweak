//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMDiskUsageReportData : NSObject
{
    unsigned int _m_totalFileNum;
    unsigned int _m_scanStartTime;
    unsigned int _m_scanEndTime;
    unsigned int _m_scanUsedTime;
    unsigned int _m_scanCount;
    unsigned int _m_totalDelFileNum;
    unsigned long long _m_totalFileSize;
    NSMutableDictionary *_m_dicBizStat;
    NSMutableDictionary *_m_dicFileTypeInUseStat;
    NSMutableDictionary *_m_dicSpecialFileStat;
    unsigned long long _m_totalDelFileSize;
}

+ (_Bool)saveReportDataWithScanStat:(id)arg1 toFilePath:(id)arg2;
+ (id)loadReportDataFromFile:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_dicSpecialFileStat;
+ (void)PBArrayAdd_m_dicFileTypeInUseStat;
+ (void)PBArrayAdd_m_totalDelFileSize;
+ (void)PBArrayAdd_m_totalDelFileNum;
+ (void)PBArrayAdd_m_scanCount;
+ (void)PBArrayAdd_m_scanUsedTime;
+ (void)PBArrayAdd_m_scanEndTime;
+ (void)PBArrayAdd_m_scanStartTime;
+ (void)PBArrayAdd_m_dicBizStat;
+ (void)PBArrayAdd_m_totalFileSize;
+ (void)PBArrayAdd_m_totalFileNum;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long m_totalDelFileSize; // @synthesize m_totalDelFileSize=_m_totalDelFileSize;
@property(nonatomic) unsigned int m_totalDelFileNum; // @synthesize m_totalDelFileNum=_m_totalDelFileNum;
@property(nonatomic) unsigned int m_scanCount; // @synthesize m_scanCount=_m_scanCount;
@property(nonatomic) unsigned int m_scanUsedTime; // @synthesize m_scanUsedTime=_m_scanUsedTime;
@property(nonatomic) unsigned int m_scanEndTime; // @synthesize m_scanEndTime=_m_scanEndTime;
@property(nonatomic) unsigned int m_scanStartTime; // @synthesize m_scanStartTime=_m_scanStartTime;
@property(retain, nonatomic) NSMutableDictionary *m_dicSpecialFileStat; // @synthesize m_dicSpecialFileStat=_m_dicSpecialFileStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicFileTypeInUseStat; // @synthesize m_dicFileTypeInUseStat=_m_dicFileTypeInUseStat;
@property(retain, nonatomic) NSMutableDictionary *m_dicBizStat; // @synthesize m_dicBizStat=_m_dicBizStat;
@property(nonatomic) unsigned long long m_totalFileSize; // @synthesize m_totalFileSize=_m_totalFileSize;
@property(nonatomic) unsigned int m_totalFileNum; // @synthesize m_totalFileNum=_m_totalFileNum;
- (id)genSpecialFileTypeReportString:(id)arg1 specialTypeStirng:(id)arg2;
- (id)genFileTypeInUseString:(id)arg1 fileTypeString:(id)arg2;
- (id)genStatString:(id)arg1 bizTypeString:(id)arg2;
- (id)genTotalStatString;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

