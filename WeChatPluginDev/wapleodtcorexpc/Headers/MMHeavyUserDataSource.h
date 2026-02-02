//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSDate, NSMutableArray;
@protocol MMHeavyUserDataSourceDelegate;

@interface MMHeavyUserDataSource : NSObject
{
    MemoryMappedKV *m_memoryMappedKV;
    unsigned long long m_heavyUserType;
    unsigned long long m_heavyUserPoint;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterdayDumpCount;
    double m_finderAEC;
    NSMutableArray *m_effectiveWatchLiveDays;
    unsigned long long m_todayWatchLiveTotalTime;
    NSDate *m_liveLastDate;
    id <MMHeavyUserDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHeavyUserDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAll;
- (double)getLiveWatchRate;
- (void)updateEffectiveWatchLiveDaysArray;
- (void)updateLiveTime:(unsigned long long)arg1;
- (void)updateFinderAEC:(double)arg1;
- (double)getFinderAEC;
- (void)addDumpCount;
- (unsigned long long)p_getYesterDayDumpCount;
- (unsigned long long)getDumpCount;
- (void)updateWeChatSize:(unsigned long long)arg1;
- (unsigned long long)getWeChatSize;
- (void)updateSessionCount:(unsigned long long)arg1;
- (unsigned long long)getSessionCount;
- (void)updateContactCount:(unsigned long long)arg1;
- (unsigned long long)getContactCount;
- (_Bool)checkIfNeedRetryStackReport;
- (void)finishStackReport;
- (void)beginStackReport;
- (void)updateHeavyUserPoint:(unsigned long long)arg1;
- (unsigned long long)getHeavyUserPoint;
- (void)saveLastReportHeavyUserPointTime;
- (_Bool)isFirstReportHeavyUserPointToday;
- (unsigned long long)getHeavyUserType;
- (unsigned long long)getLastReportHeavyUserType;
- (void)saveLastReportHeavyUserType:(unsigned long long)arg1;
- (void)updateHeavyUserType:(unsigned long long)arg1;
- (void)updateNextReportTimestamp;
- (_Bool)isFirstReportHeavyUserTypeToday;
- (void)saveTodayHasScanned;
- (_Bool)isFirstScanThisWeek;
- (id)get14606KVString;
- (id)currentUserMemmoryMappedKey;
- (void)loadData;
- (id)init;

@end

