//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, WCFinderGlobalWordingIconConfig;

@interface WCFinderWordingIconConfigGroup : NSObject
{
    NSDictionary *_localDefaultConfigs;
    CDUnknownBlockType _serverConfigSetter;
    WCFinderGlobalWordingIconConfig *_globalConfig;
    CDUnknownBlockType _globalConfigSetter;
    NSMutableDictionary *_serverFieldSetterMap;
}

+ (id)generatorGroupConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *serverFieldSetterMap; // @synthesize serverFieldSetterMap=_serverFieldSetterMap;
@property(copy, nonatomic) CDUnknownBlockType globalConfigSetter; // @synthesize globalConfigSetter=_globalConfigSetter;
@property(retain, nonatomic) WCFinderGlobalWordingIconConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
@property(copy, nonatomic) CDUnknownBlockType serverConfigSetter; // @synthesize serverConfigSetter=_serverConfigSetter;
@property(retain, nonatomic) NSDictionary *localDefaultConfigs; // @synthesize localDefaultConfigs=_localDefaultConfigs;
- (void)doSomethingMagicLogic;

@end

