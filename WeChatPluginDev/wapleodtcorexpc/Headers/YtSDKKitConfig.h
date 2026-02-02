//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface YtSDKKitConfig : NSObject
{
    NSString *sdkConfigMd5;
    NSString *uiConfigMd5;
    NSDictionary *_sdkConfig;
    NSDictionary *_uiConfig;
}

+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *uiConfig; // @synthesize uiConfig=_uiConfig;
@property(retain, nonatomic) NSDictionary *sdkConfig; // @synthesize sdkConfig=_sdkConfig;
- (id)getMd5:(id)arg1;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (id)getConfigData:(id)arg1 withKey:(id)arg2 withRequired:(_Bool)arg3;
- (id)getStateNameArrayBy:(long long)arg1;
- (id)parseJsonConfigWith:(id)arg1 withJsonRoot:(id)arg2 outWithResult:(int *)arg3;
- (id)getSDKConfigBy:(long long)arg1;
- (id)getUIConfigBy:(long long)arg1;
- (_Bool)validateConfigData;
- (int)loadSDKConfigWith:(id)arg1 withUIConfig:(id)arg2;

@end

