//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCDBBackupRecord : NSObject
{
    unsigned int _incrementalBackupTimes;
    long long _bakeupSize;
    long long _backupTimes;
    NSDate *_startRecordTime;
    long long _walFrameCount;
    long long _tableCount;
    long long _associatedTableCount;
    long long _leafPageCount;
    long long _processTime;
    long long _skipTimes;
    long long _actualCPUProcessTime;
    long long _getCPUTimeFalseTimes;
    NSDate *_beginBackupTime;
    unsigned long long _beginBackupCPUTime;
    long long _incrementalMaterialSize;
}

+ (void)initialize;
+ (void)PBArrayAdd_incrementalMaterialSize;
+ (void)PBArrayAdd_incrementalBackupTimes;
+ (void)PBArrayAdd_beginBackupCPUTime;
+ (void)PBArrayAdd_getCPUTimeFalseTimes;
+ (void)PBArrayAdd_actualCPUProcessTime;
+ (void)PBArrayAdd_skipTimes;
+ (void)PBArrayAdd_beginBackupTime;
+ (void)PBArrayAdd_processTime;
+ (void)PBArrayAdd_leafPageCount;
+ (void)PBArrayAdd_associatedTableCount;
+ (void)PBArrayAdd_tableCount;
+ (void)PBArrayAdd_walFrameCount;
+ (void)PBArrayAdd_startRecordTime;
+ (void)PBArrayAdd_backupTimes;
+ (void)PBArrayAdd_bakeupSize;
- (void).cxx_destruct;
@property(nonatomic) long long incrementalMaterialSize; // @synthesize incrementalMaterialSize=_incrementalMaterialSize;
@property(nonatomic) unsigned int incrementalBackupTimes; // @synthesize incrementalBackupTimes=_incrementalBackupTimes;
@property(nonatomic) unsigned long long beginBackupCPUTime; // @synthesize beginBackupCPUTime=_beginBackupCPUTime;
@property(retain, nonatomic) NSDate *beginBackupTime; // @synthesize beginBackupTime=_beginBackupTime;
@property(nonatomic) long long getCPUTimeFalseTimes; // @synthesize getCPUTimeFalseTimes=_getCPUTimeFalseTimes;
@property(nonatomic) long long actualCPUProcessTime; // @synthesize actualCPUProcessTime=_actualCPUProcessTime;
@property(nonatomic) long long skipTimes; // @synthesize skipTimes=_skipTimes;
@property(nonatomic) long long processTime; // @synthesize processTime=_processTime;
@property(nonatomic) long long leafPageCount; // @synthesize leafPageCount=_leafPageCount;
@property(nonatomic) long long associatedTableCount; // @synthesize associatedTableCount=_associatedTableCount;
@property(nonatomic) long long tableCount; // @synthesize tableCount=_tableCount;
@property(nonatomic) long long walFrameCount; // @synthesize walFrameCount=_walFrameCount;
@property(retain, nonatomic) NSDate *startRecordTime; // @synthesize startRecordTime=_startRecordTime;
@property(nonatomic) long long backupTimes; // @synthesize backupTimes=_backupTimes;
@property(nonatomic) long long bakeupSize; // @synthesize bakeupSize=_bakeupSize;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

