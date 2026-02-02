//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WCFinderSearchItemReportQueue : NSObject
{
    unsigned long long _batchReportCount;
    unsigned long long _reportType;
    unsigned long long _reportSearchScene;
    NSMutableSet *_reportedItems;
    NSMutableArray *_pendingReportItems;
    long long _lastReportExposeTimeInMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long lastReportExposeTimeInMs; // @synthesize lastReportExposeTimeInMs=_lastReportExposeTimeInMs;
@property(retain, nonatomic) NSMutableArray *pendingReportItems; // @synthesize pendingReportItems=_pendingReportItems;
@property(retain, nonatomic) NSMutableSet *reportedItems; // @synthesize reportedItems=_reportedItems;
@property(nonatomic) unsigned long long reportSearchScene; // @synthesize reportSearchScene=_reportSearchScene;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) unsigned long long batchReportCount; // @synthesize batchReportCount=_batchReportCount;
- (void)report;
- (void)tryReport;
- (void)recardFeed:(id)arg1 index:(long long)arg2 reqId:(id)arg3 text:(id)arg4;
- (void)recardContact:(id)arg1 index:(long long)arg2 reqId:(id)arg3 text:(id)arg4;
- (void)recardBeginExposeTimestamp;
- (void)removeAllObjects;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;

@end

