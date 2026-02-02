//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WAAppTaskVersionFallBackMarkItem : NSObject
{
    unsigned int _targetAppVersion;
    NSString *_appid;
    NSString *_username;
    NSString *_instanceId;
    unsigned long long _scene;
    unsigned long long _debugModeType;
    unsigned long long _updateStartTimeInMs;
    unsigned long long _updatingScene;
    NSMutableArray *_needDownloadInfoDatas;
    NSMutableArray *_downloadSuccessInfoDatas;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadSuccessInfoDatas; // @synthesize downloadSuccessInfoDatas=_downloadSuccessInfoDatas;
@property(retain, nonatomic) NSMutableArray *needDownloadInfoDatas; // @synthesize needDownloadInfoDatas=_needDownloadInfoDatas;
@property(nonatomic) unsigned long long updatingScene; // @synthesize updatingScene=_updatingScene;
@property(nonatomic) unsigned long long updateStartTimeInMs; // @synthesize updateStartTimeInMs=_updateStartTimeInMs;
@property(nonatomic) unsigned long long debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int targetAppVersion; // @synthesize targetAppVersion=_targetAppVersion;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;

@end

