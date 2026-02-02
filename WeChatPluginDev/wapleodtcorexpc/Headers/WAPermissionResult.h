//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAPermissionResult
{
    _Bool _useTempPermission;
    _Bool _needDelayExecute;
    _Bool _resultHasPermission;
    unsigned int _permissionState;
    unsigned int _runningState;
    NSString *_runningStateDescription;
    NSString *_permissionMsg;
    NSString *_resultMsg;
}

+ (id)getSucceedResult;
+ (id)getFailedResult;
- (void).cxx_destruct;
@property(nonatomic) _Bool resultHasPermission; // @synthesize resultHasPermission=_resultHasPermission;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(retain, nonatomic) NSString *permissionMsg; // @synthesize permissionMsg=_permissionMsg;
@property(nonatomic) _Bool needDelayExecute; // @synthesize needDelayExecute=_needDelayExecute;
@property(retain, nonatomic) NSString *runningStateDescription; // @synthesize runningStateDescription=_runningStateDescription;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) _Bool useTempPermission; // @synthesize useTempPermission=_useTempPermission;
@property(nonatomic) unsigned int permissionState; // @synthesize permissionState=_permissionState;

@end

