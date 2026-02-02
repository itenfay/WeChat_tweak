//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WAPackageConfig : NSObject
{
    _Bool _isServerAllowUseModule;
    unsigned int _appServiceType;
    unsigned int _debugModeType;
    unsigned int _appVersion;
    unsigned int _debugFrom;
    unsigned int _debugDevKey;
    unsigned int _templateID;
    NSString *_appId;
    NSString *_userName;
    NSString *_packageMd5;
    NSString *_loadingImgUrl;
    NSString *_loadingImgUrlProgressbarColor;
    NSString *_debugPackageUrl;
    NSString *_deviceOrientation;
    NSArray *_arrModuleList;
    NSString *_entranceModule;
    NSDictionary *_dicClientJsExtInfo;
    NSString *_withoutLibMd5;
    NSArray *_arrPluginCodeInfo;
    NSArray *_arrWidgetInfo;
    NSString *_withoutLibUrl;
}

+ (_Bool)isModuleInfoValid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int templateID; // @synthesize templateID=_templateID;
@property(retain, nonatomic) NSString *withoutLibUrl; // @synthesize withoutLibUrl=_withoutLibUrl;
@property(retain, nonatomic) NSArray *arrWidgetInfo; // @synthesize arrWidgetInfo=_arrWidgetInfo;
@property(retain, nonatomic) NSArray *arrPluginCodeInfo; // @synthesize arrPluginCodeInfo=_arrPluginCodeInfo;
@property(retain, nonatomic) NSString *withoutLibMd5; // @synthesize withoutLibMd5=_withoutLibMd5;
@property(retain, nonatomic) NSDictionary *dicClientJsExtInfo; // @synthesize dicClientJsExtInfo=_dicClientJsExtInfo;
@property(retain, nonatomic) NSString *entranceModule; // @synthesize entranceModule=_entranceModule;
@property(retain, nonatomic) NSArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
@property(nonatomic) _Bool isServerAllowUseModule; // @synthesize isServerAllowUseModule=_isServerAllowUseModule;
@property(retain, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(retain, nonatomic) NSString *debugPackageUrl; // @synthesize debugPackageUrl=_debugPackageUrl;
@property(nonatomic) unsigned int debugFrom; // @synthesize debugFrom=_debugFrom;
@property(retain, nonatomic) NSString *loadingImgUrlProgressbarColor; // @synthesize loadingImgUrlProgressbarColor=_loadingImgUrlProgressbarColor;
@property(retain, nonatomic) NSString *loadingImgUrl; // @synthesize loadingImgUrl=_loadingImgUrl;
@property(retain, nonatomic) NSString *packageMd5; // @synthesize packageMd5=_packageMd5;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int debugModeType; // @synthesize debugModeType=_debugModeType;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isGameApp;
- (id)separatedPluginsInfoWithPluginList:(id)arg1 moduleName:(id)arg2;
- (id)separatedPluginsWithModuleName:(id)arg1;
- (_Bool)isModuleUseSeperatedMultiPluginCodes:(id)arg1;
- (_Bool)isModuleUseSeperatedPluginCodes:(id)arg1;
- (_Bool)isModuleUseWeappSeperatedPluginCodes:(id)arg1;
- (_Bool)isModuleUseGameSeperatedPluginCodes:(id)arg1;
- (_Bool)isModuleUseMultiPluginCodes:(id)arg1;
- (_Bool)isUseMultiSeperatedPluginCodes;
- (_Bool)isUseWeappSeperatedPluginCodes;
- (_Bool)isUseGameSeperatedPluginCodes;
- (id)entranceModuleName;
- (id)pathComponentsWithoutFileSeperator:(id)arg1;
- (_Bool)isPagePath:(id)arg1 matchAliasName:(id)arg2;
- (_Bool)isPagePath:(id)arg1 matchModuleName:(id)arg2;
- (_Bool)isUnspecificedFileNameWithPagePath:(id)arg1;
- (_Bool)isModuleNameIndependentModule:(id)arg1;
- (_Bool)isPathInIndependentModule:(id)arg1;
- (id)parallelDownloadOnLaunchModuleNames;
- (id)validModuleNameFromPagePath:(id)arg1;
- (id)getModuleInfoWithName:(id)arg1;
- (_Bool)isWeAppUseModule;
- (id)description;
- (id)initWithDebugNotifyInfo:(id)arg1;
- (id)initWithContact:(id)arg1;

@end

