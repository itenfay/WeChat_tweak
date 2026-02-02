//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WAPackageConfig;

@interface WACacheVersionCheckerContext : NSObject
{
    _Bool _preChecked;
    _Bool _inColdLaunch;
    _Bool _isSilentOpen;
    _Bool _remoteMode;
    unsigned int _syncType;
    unsigned int _silentOpenType;
    WAPackageConfig *_packageConfig;
    NSString *_relativeURL;
    NSMutableArray *_needDownloadInfoDatas;
    NSArray *_entryPackages;
    unsigned long long _checkScene;
    unsigned long long _openScene;
    NSString *_sceneNote;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool remoteMode; // @synthesize remoteMode=_remoteMode;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int silentOpenType; // @synthesize silentOpenType=_silentOpenType;
@property(nonatomic) _Bool isSilentOpen; // @synthesize isSilentOpen=_isSilentOpen;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(nonatomic) unsigned long long checkScene; // @synthesize checkScene=_checkScene;
@property(retain, nonatomic) NSArray *entryPackages; // @synthesize entryPackages=_entryPackages;
@property(nonatomic) unsigned int syncType; // @synthesize syncType=_syncType;
@property(nonatomic) _Bool inColdLaunch; // @synthesize inColdLaunch=_inColdLaunch;
@property(retain, nonatomic) NSMutableArray *needDownloadInfoDatas; // @synthesize needDownloadInfoDatas=_needDownloadInfoDatas;
@property(nonatomic) _Bool preChecked; // @synthesize preChecked=_preChecked;
@property(copy, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(retain, nonatomic) WAPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;

@end

