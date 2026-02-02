//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WAPublicResModel;

@interface WAApptaskPublicResLogic : NSObject
{
    NSString *_appid;
    WAPublicResModel *_model;
    NSDictionary *_pubLibVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *pubLibVersion; // @synthesize pubLibVersion=_pubLibVersion;
@property(retain, nonatomic) WAPublicResModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (id)getWAMagicBrushSubContextJS;
- (id)getWAMagicBrushMainContextJS;
- (id)getPublicLocalCacheDataWithRelativePath:(id)arg1;
- (id)getPublicLocalCacheData:(unsigned long long)arg1;
- (long long)getWkFeatureVersion;
- (unsigned int)getLibPrivacyApiVersion;
- (_Bool)getLibSupportListenNewPerformanceMetric;
- (_Bool)getLibSupportListenTaskStateChange;
- (_Bool)getLibSupportAudits;
- (_Bool)getLibSupportInvokeWithAppId;
- (_Bool)getLibSupportInjectAppSeparatedPlugin;
- (_Bool)getInjectGameContextPlugin;
- (id)getLibStringUpdateTime;
- (id)getLibStringVersionUpdateTime;
- (_Bool)getLibSupportGameLiveInvite;
- (_Bool)getLibSupportGameLive;
- (_Bool)getLibSupportSkyline;
- (_Bool)getLibSupportLazyCodeLoading;
- (_Bool)getLibPruneWxConfigByPage;
- (id)getLibExptDict;
- (id)getLibExptString;
- (_Bool)getLibFeatureSupported:(id)arg1;
- (id)getLibStringVersion;
- (id)description;
- (id)init;

@end

