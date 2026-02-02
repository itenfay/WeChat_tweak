//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EntranceReportSwitch, FinderCommonReddotSyncTask, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface FinderCommonReddotSyncBaseLogic : NSObject
{
    unsigned int _cgiNumber;
    NSString *_moduleName;
    NSData *_syncBuffer;
    NSData *_lastBuffer;
    NSMutableArray *_syncTaskQueue;
    FinderCommonReddotSyncTask *_curSyncingTask;
    EntranceReportSwitch *_entranceExposeSwitch;
    NSMutableDictionary *_switchSyncTimestampDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchSyncTimestampDic; // @synthesize switchSyncTimestampDic=_switchSyncTimestampDic;
@property(retain, nonatomic) EntranceReportSwitch *entranceExposeSwitch; // @synthesize entranceExposeSwitch=_entranceExposeSwitch;
@property(retain, nonatomic) FinderCommonReddotSyncTask *curSyncingTask; // @synthesize curSyncingTask=_curSyncingTask;
@property(retain, nonatomic) NSMutableArray *syncTaskQueue; // @synthesize syncTaskQueue=_syncTaskQueue;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSData *syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) unsigned int cgiNumber; // @synthesize cgiNumber=_cgiNumber;
- (int)getSafeCacheTimeWithTimestamp:(double)arg1;
- (void)triggerSyncWithConfig:(id)arg1 syncScene:(unsigned int)arg2 syncBlock:(CDUnknownBlockType)arg3;
- (void)triggerSyncWithConfig:(id)arg1 syncScene:(unsigned int)arg2;
- (id)getFinderClientStatus;
- (void)onSyncFailedWithTask:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)onSyncSuccessWithTask:(id)arg1 response:(id)arg2;
- (void)realStartWithTask:(id)arg1;
- (void)checkQueue;
- (void)updateReddotExpose:(id)arg1 entranceCtrlInfo:(id)arg2 otherRelatedKeyPathList:(id)arg3;
- (void)onEndWithContinueFlag;
- (void)addSyncTask:(id)arg1;
- (id)initWithCgiNumber:(unsigned int)arg1 moduleName:(id)arg2;

@end

