//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMActiveStorageStatInfo, NSMutableArray, NSString;

@interface MMActiveStorageReportStatus : NSObject
{
    unsigned int _lastReportTime;
    unsigned int _beforeCheckTime;
    unsigned int _endCheckTime;
    MMActiveStorageStatInfo *_allStatInfo;
    MMActiveStorageStatInfo *_activeStatInfo;
    NSMutableArray *_finishUserName;
}

+ (id)loadStausDataFromFile;
+ (void)initialize;
+ (void)PBArrayAdd_finishUserName;
+ (void)PBArrayAdd_activeStatInfo;
+ (void)PBArrayAdd_allStatInfo;
+ (void)PBArrayAdd_endCheckTime;
+ (void)PBArrayAdd_beforeCheckTime;
+ (void)PBArrayAdd_lastReportTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *finishUserName; // @synthesize finishUserName=_finishUserName;
@property(retain, nonatomic) MMActiveStorageStatInfo *activeStatInfo; // @synthesize activeStatInfo=_activeStatInfo;
@property(retain, nonatomic) MMActiveStorageStatInfo *allStatInfo; // @synthesize allStatInfo=_allStatInfo;
@property(nonatomic) unsigned int endCheckTime; // @synthesize endCheckTime=_endCheckTime;
@property(nonatomic) unsigned int beforeCheckTime; // @synthesize beforeCheckTime=_beforeCheckTime;
@property(nonatomic) unsigned int lastReportTime; // @synthesize lastReportTime=_lastReportTime;
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

