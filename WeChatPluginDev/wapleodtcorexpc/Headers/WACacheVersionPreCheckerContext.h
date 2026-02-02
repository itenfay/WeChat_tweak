//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, WAAppTaskExtInfo, WACacheVersionPreChecker, WACacheVersionPreCheckerContextResult, WAContact, WAPackageConfig;

@interface WACacheVersionPreCheckerContext : NSObject
{
    _Bool _inColdLaunch;
    _Bool _isSilentOpoen;
    unsigned int _scene;
    unsigned int _syncType;
    WAContact *_contact;
    WAPackageConfig *_packageConfig;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_relativeURL;
    NSString *_instanceId;
    NSArray *_entryPackages;
    NSArray *_parallelDownloadModuleNames;
    WACacheVersionPreCheckerContextResult *_checkResult;
    WACacheVersionPreChecker *_preChecker;
}

+ (id)genPreCheckerIdentifierWithAppid:(id)arg1 appVersion:(unsigned long long)arg2 debugType:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WACacheVersionPreChecker *preChecker; // @synthesize preChecker=_preChecker;
@property(retain, nonatomic) WACacheVersionPreCheckerContextResult *checkResult; // @synthesize checkResult=_checkResult;
@property(retain, nonatomic) NSArray *parallelDownloadModuleNames; // @synthesize parallelDownloadModuleNames=_parallelDownloadModuleNames;
@property(retain, nonatomic) NSArray *entryPackages; // @synthesize entryPackages=_entryPackages;
@property(nonatomic) unsigned int syncType; // @synthesize syncType=_syncType;
@property(nonatomic) _Bool isSilentOpoen; // @synthesize isSilentOpoen=_isSilentOpoen;
@property(nonatomic) _Bool inColdLaunch; // @synthesize inColdLaunch=_inColdLaunch;
@property(copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(copy, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) WAPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;
@property(retain, nonatomic) WAContact *contact; // @synthesize contact=_contact;

@end

