//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, SystemAuthConfig;

@interface SystemAuthConfigurator : NSObject
{
    SystemAuthConfig *_defaultConfig;
    SystemAuthConfig *_updatedConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SystemAuthConfig *updatedConfig; // @synthesize updatedConfig=_updatedConfig;
@property(retain, nonatomic) SystemAuthConfig *defaultConfig; // @synthesize defaultConfig=_defaultConfig;
@property(readonly, nonatomic) NSDictionary *webSceneMap;
@property(readonly, nonatomic) SystemAuthConfig *curConfig;
- (id)appDefaultResoucePath;
- (id)tempResourceFilePath;
- (id)updatedResourceFilePath;
- (id)updatedResourcePath;
- (void)updateResource;
- (id)init;

@end

