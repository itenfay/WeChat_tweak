//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconLocalDataRecordInterface : NSObject
{
    int maxTime;
    int _cloudRealDelayDB;
    int _cloudRealNumDB;
}

+ (id)sharedInstance;
@property(nonatomic) int cloudRealNumDB; // @synthesize cloudRealNumDB=_cloudRealNumDB;
@property(nonatomic) int cloudRealDelayDB; // @synthesize cloudRealDelayDB=_cloudRealDelayDB;
- (void)flushObjectsToDB;
- (void)doPersist;
- (void)notifyToPersist;
- (void)clearTimer;
- (void)initTimer;
- (void)cloudParamInit;
- (void)saveObject:(id)arg1;
- (void)setPersistListener:(id)arg1;
- (id)init;

@end

