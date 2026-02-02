//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAppLink, NSDictionary;

@interface FBSDKAppLinkNavigation : NSObject
{
    NSDictionary *_extras;
    NSDictionary *_appLinkData;
    FBSDKAppLink *_appLink;
}

+ (void)setDefaultResolver:(id)arg1;
+ (id)defaultResolver;
+ (long long)navigationTypeForLink:(id)arg1;
+ (long long)navigateToAppLink:(id)arg1 error:(id *)arg2;
+ (void)navigateToURL:(id)arg1 resolver:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)navigateToURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resolveAppLink:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)resolveAppLink:(id)arg1 resolver:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)callbackAppLinkDataForAppWithName:(id)arg1 url:(id)arg2;
+ (id)navigationWithAppLink:(id)arg1 extras:(id)arg2 appLinkData:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FBSDKAppLink *appLink; // @synthesize appLink=_appLink;
@property(copy, nonatomic) NSDictionary *appLinkData; // @synthesize appLinkData=_appLinkData;
@property(copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(readonly, nonatomic) long long navigationType;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:(id)arg1 error:(id)arg2 type:(long long)arg3;
- (long long)navigate:(id *)arg1;
- (id)appLinkURLWithTargetURL:(id)arg1 error:(id *)arg2;
- (id)stringByEscapingQueryString:(id)arg1;

@end

