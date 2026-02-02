//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol RingToneVibrateDataSource;

@interface RingToneVibrateController : NSObject
{
    _Bool _storageFilelongTermIfNeed;
    _Bool _isVibrating;
    id <RingToneVibrateDataSource> _dataSource;
    CDUnknownBlockType _onVibrate;
    NSString *_identifier;
}

+ (void)ClassicsRepeatVibration;
+ (_Bool)CustomizedVibrateEnabledWhileAPPBackground;
+ (_Bool)CustomizedVibrateEnabledWhileAuditioning;
+ (_Bool)CustomizedVibrateEnabled;
+ (_Bool)SupportCustomizedVibrate;
+ (_Bool)VibrateEnabled;
- (void).cxx_destruct;
@property(nonatomic) _Bool isVibrating; // @synthesize isVibrating=_isVibrating;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType onVibrate; // @synthesize onVibrate=_onVibrate;
@property(nonatomic) _Bool storageFilelongTermIfNeed; // @synthesize storageFilelongTermIfNeed=_storageFilelongTermIfNeed;
@property(nonatomic) __weak id <RingToneVibrateDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)applicationEnterBackground;
- (void)applicationWillBecomeActive;
- (double)getVibrateProgressWithStartPlayTime:(unsigned long long)arg1;
- (void)tryVibrateWithRingID:(id)arg1;
- (void)stop;
- (void)replay;
- (void)checkAndPlayVibrateFile:(id)arg1;
- (void)executeInHapticQueueWithBlock:(CDUnknownBlockType)arg1;

@end

