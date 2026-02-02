//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTDatabase;

@interface WXGMigrationInfoDB : NSObject
{
    WCTDatabase *_infoDB;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTDatabase *infoDB; // @synthesize infoDB=_infoDB;
- (void)p_mergeTheTimeIntervalArray:(id)arg1;
- (id)p_getSessionTimeIntervalTableWithDeviceID:(id)arg1;
- (id)p_getSessionLastTimeTableWithDeviceID:(id)arg1;
- (_Bool)hasMigrationWithDeviceID:(id)arg1 withSessionName:(id)arg2;
- (_Bool)hasMigrationWithDeviceID:(id)arg1;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (unsigned int)getSessionLastTime:(id)arg1 withDeviceID:(id)arg2;
- (void)insertSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3 withDeviceID:(id)arg4;
- (void)insertSession:(id)arg1 withLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (void)createSessionLastTimeTableWithDeviceID:(id)arg1;
- (void)closeDB;
- (void)dealloc;

@end

