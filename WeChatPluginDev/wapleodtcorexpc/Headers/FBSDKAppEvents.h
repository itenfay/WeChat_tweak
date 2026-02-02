//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKAppEventsState, FBSDKEventBindingManager, FBSDKServerConfiguration, NSString;
@protocol OS_dispatch_source;

@interface FBSDKAppEvents : NSObject
{
    _Bool _explicitEventsLoggedYet;
    FBSDKServerConfiguration *_serverConfiguration;
    FBSDKAppEventsState *_appEventsState;
    FBSDKEventBindingManager *_eventBindingManager;
    NSString *_userID;
    _Bool _isUnityInit;
    _Bool _disableTimer;
    unsigned long long _flushBehavior;
    NSString *_pushNotificationsDeviceTokenString;
    NSObject<OS_dispatch_source> *_flushTimer;
}

+ (id)requestForCustomAudienceThirdPartyIDWithAccessToken:(id)arg1;
+ (id)singleton;
+ (void)logImplicitEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logInternalEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4 accessToken:(id)arg5;
+ (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4;
+ (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(_Bool)arg3 accessToken:(id)arg4;
+ (void)logInternalEvent:(id)arg1 parameters:(id)arg2 isImplicitlyLogged:(_Bool)arg3;
+ (void)logInternalEvent:(id)arg1 valueToSum:(double)arg2 isImplicitlyLogged:(_Bool)arg3;
+ (void)logInternalEvent:(id)arg1 isImplicitlyLogged:(_Bool)arg2;
+ (void)sendEventBindingsToUnity;
+ (void)setIsUnityInit:(_Bool)arg1;
+ (void)augmentHybridWKWebView:(id)arg1;
+ (void)updateUserProperties:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)clearUserDataForType:(id)arg1;
+ (void)setUserData:(id)arg1 forType:(id)arg2;
+ (void)clearUserData;
+ (id)getUserData;
+ (void)setUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (id)userID;
+ (void)clearUserID;
+ (void)setUserID:(id)arg1;
+ (void)flush;
+ (void)setLoggingOverrideAppID:(id)arg1;
+ (id)loggingOverrideAppID;
+ (void)setFlushBehavior:(unsigned long long)arg1;
+ (unsigned long long)flushBehavior;
+ (void)setPushNotificationsDeviceTokenString:(id)arg1;
+ (void)setPushNotificationsDeviceToken:(id)arg1;
+ (void)activateApp;
+ (void)logProductItem:(id)arg1 availability:(unsigned long long)arg2 condition:(unsigned long long)arg3 description:(id)arg4 imageLink:(id)arg5 link:(id)arg6 title:(id)arg7 priceAmount:(double)arg8 currency:(id)arg9 gtin:(id)arg10 mpn:(id)arg11 brand:(id)arg12 parameters:(id)arg13;
+ (void)logPushNotificationOpen:(id)arg1 action:(id)arg2;
+ (void)logPushNotificationOpen:(id)arg1;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3;
+ (void)logPurchase:(double)arg1 currency:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 accessToken:(id)arg4;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
+ (void)logEvent:(id)arg1 parameters:(id)arg2;
+ (void)logEvent:(id)arg1 valueToSum:(double)arg2;
+ (void)logEvent:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(copy, nonatomic) NSString *pushNotificationsDeviceTokenString; // @synthesize pushNotificationsDeviceTokenString=_pushNotificationsDeviceTokenString;
@property(nonatomic) _Bool disableTimer; // @synthesize disableTimer=_disableTimer;
@property(nonatomic) unsigned long long flushBehavior; // @synthesize flushBehavior=_flushBehavior;
- (void)applicationMovingFromActiveStateOrTerminating;
- (void)applicationDidBecomeActive;
- (void)flushTimerFired:(id)arg1;
- (void)handleActivitiesPostCompletion:(id)arg1 loggingEntry:(id)arg2 appEventsState:(id)arg3;
- (void)flushOnMainQueue:(id)arg1 forReason:(unsigned long long)arg2;
- (void)checkPersistedEvents;
- (void)instanceLogEvent:(id)arg1 valueToSum:(id)arg2 parameters:(id)arg3 isImplicitlyLogged:(_Bool)arg4 accessToken:(id)arg5;
- (void)fetchServerConfiguration:(CDUnknownBlockType)arg1;
- (void)enableCodelessEvents;
- (void)publishInstall;
- (id)appID;
- (void)flushForReason:(unsigned long long)arg1;
- (void)dealloc;
- (void)registerNotifications;
- (id)init;

@end

