//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface HLReport : NSObject
{
    _Bool _reporting;
    _Bool _waiting;
    NSObject<OS_dispatch_queue> *_dealQueue;
    struct sqlite3 *_db;
    long long _totolCount;
    long long _fcount;
    NSDate *_lastDate;
}

+ (id)displayName;
+ (id)vendorID;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(nonatomic) long long fcount; // @synthesize fcount=_fcount;
@property long long totolCount; // @synthesize totolCount=_totolCount;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
@property(nonatomic) _Bool waiting; // @synthesize waiting=_waiting;
@property(nonatomic) _Bool reporting; // @synthesize reporting=_reporting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dealQueue; // @synthesize dealQueue=_dealQueue;
- (long long)updateCount;
- (void)touchReportForce:(_Bool)arg1;
- (void)asyncDeleteAllRecords;
- (void)asyncDoReport:(id)arg1 orType:(long long)arg2;
- (void)asyncTouchReport;
- (id)init;

@end

