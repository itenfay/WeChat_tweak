//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKServerConfigurationManager : NSObject
{
}

+ (CDUnknownBlockType)_wrapperBlockForLoadBlock:(CDUnknownBlockType)arg1;
+ (_Bool)_serverConfigurationTimestampIsValid:(id)arg1;
+ (id)_parseDialogConfigurations:(id)arg1;
+ (void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3;
+ (id)_defaultServerConfigurationForAppID:(id)arg1;
+ (id)requestToLoadServerConfiguration:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (void)loadServerConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)cachedServerConfiguration;
+ (void)clearCache;
+ (void)initialize;
- (id)init;

@end

