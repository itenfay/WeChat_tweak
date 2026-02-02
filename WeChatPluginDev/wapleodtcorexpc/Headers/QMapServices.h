//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, QMapLoggerConfig;

@interface QMapServices : NSObject
{
    _Bool _enableDebugLog;
    NSString *_APIKey;
    NSMutableDictionary *_internalCacheOptions;
    QMapLoggerConfig *_loggerConfig;
}

+ (id)sharedServices;
- (void).cxx_destruct;
@property(retain, nonatomic) QMapLoggerConfig *loggerConfig; // @synthesize loggerConfig=_loggerConfig;
@property(retain, nonatomic) NSMutableDictionary *internalCacheOptions; // @synthesize internalCacheOptions=_internalCacheOptions;
@property(nonatomic) _Bool enableDebugLog; // @synthesize enableDebugLog=_enableDebugLog;
- (int)getMapCacheClearSizeLimitByType:(long long)arg1;
- (void)ConfigMapCacheClearOption:(id)arg1;
- (id)init;
- (void)setQMapLoggerCofig:(id)arg1;
- (void)setPrivacyAgreement:(_Bool)arg1;
@property(copy, nonatomic) NSString *userId;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (id)sdkVersion;
- (void)notifyAppKeyCheckResult:(int)arg1;

@end

