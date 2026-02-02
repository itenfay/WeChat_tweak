//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderBuildJumpConfig, WCFinderBuildLiteAppConfig;

@interface WCFinderBuildJumpLiteModel : NSObject
{
    WCFinderBuildJumpConfig *_jump_info_config;
    WCFinderBuildLiteAppConfig *_lite_app_config;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderBuildLiteAppConfig *lite_app_config; // @synthesize lite_app_config=_lite_app_config;
@property(retain, nonatomic) WCFinderBuildJumpConfig *jump_info_config; // @synthesize jump_info_config=_jump_info_config;
- (id)genJumpInfo;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)toJsonStr;
- (id)description;

@end

