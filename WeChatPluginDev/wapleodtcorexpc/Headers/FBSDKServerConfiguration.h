//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKErrorConfiguration, NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface FBSDKServerConfiguration : NSObject
{
    NSDictionary *_dialogConfigurations;
    NSDictionary *_dialogFlows;
    long long _version;
    _Bool _advertisingIDEnabled;
    _Bool _defaults;
    _Bool _implicitLoggingEnabled;
    _Bool _implicitPurchaseLoggingEnabled;
    _Bool _codelessEventsEnabled;
    _Bool _loginTooltipEnabled;
    _Bool _nativeAuthFlowEnabled;
    _Bool _systemAuthenticationEnabled;
    _Bool _uninstallTrackingEnabled;
    NSString *_appID;
    NSString *_appName;
    NSString *_defaultShareMode;
    FBSDKErrorConfiguration *_errorConfiguration;
    NSString *_loginTooltipText;
    NSDate *_timestamp;
    double _sessionTimoutInterval;
    NSString *_loggingToken;
    unsigned long long _smartLoginOptions;
    NSURL *_smartLoginBookmarkIconURL;
    NSURL *_smartLoginMenuIconURL;
    NSString *_updateMessage;
    NSArray *_eventBindings;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSArray *eventBindings; // @synthesize eventBindings=_eventBindings;
@property(readonly, copy, nonatomic) NSString *updateMessage; // @synthesize updateMessage=_updateMessage;
@property(readonly, copy, nonatomic) NSURL *smartLoginMenuIconURL; // @synthesize smartLoginMenuIconURL=_smartLoginMenuIconURL;
@property(readonly, copy, nonatomic) NSURL *smartLoginBookmarkIconURL; // @synthesize smartLoginBookmarkIconURL=_smartLoginBookmarkIconURL;
@property(readonly, nonatomic) unsigned long long smartLoginOptions; // @synthesize smartLoginOptions=_smartLoginOptions;
@property(readonly, copy, nonatomic) NSString *loggingToken; // @synthesize loggingToken=_loggingToken;
@property(nonatomic) double sessionTimoutInterval; // @synthesize sessionTimoutInterval=_sessionTimoutInterval;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *loginTooltipText; // @synthesize loginTooltipText=_loginTooltipText;
@property(readonly, nonatomic, getter=isUninstallTrackingEnabled) _Bool uninstallTrackingEnabled; // @synthesize uninstallTrackingEnabled=_uninstallTrackingEnabled;
@property(readonly, nonatomic, getter=isSystemAuthenticationEnabled) _Bool systemAuthenticationEnabled; // @synthesize systemAuthenticationEnabled=_systemAuthenticationEnabled;
@property(readonly, nonatomic, getter=isNativeAuthFlowEnabled) _Bool nativeAuthFlowEnabled; // @synthesize nativeAuthFlowEnabled=_nativeAuthFlowEnabled;
@property(readonly, nonatomic, getter=isLoginTooltipEnabled) _Bool loginTooltipEnabled; // @synthesize loginTooltipEnabled=_loginTooltipEnabled;
@property(readonly, nonatomic, getter=isCodelessEventsEnabled) _Bool codelessEventsEnabled; // @synthesize codelessEventsEnabled=_codelessEventsEnabled;
@property(readonly, nonatomic, getter=isImplicitPurchaseLoggingSupported) _Bool implicitPurchaseLoggingEnabled; // @synthesize implicitPurchaseLoggingEnabled=_implicitPurchaseLoggingEnabled;
@property(readonly, nonatomic, getter=isImplicitLoggingSupported) _Bool implicitLoggingEnabled; // @synthesize implicitLoggingEnabled=_implicitLoggingEnabled;
@property(readonly, nonatomic) FBSDKErrorConfiguration *errorConfiguration; // @synthesize errorConfiguration=_errorConfiguration;
@property(readonly, copy, nonatomic) NSString *defaultShareMode; // @synthesize defaultShareMode=_defaultShareMode;
@property(readonly, nonatomic, getter=isDefaults) _Bool defaults; // @synthesize defaults=_defaults;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, nonatomic, getter=isAdvertisingIDEnabled) _Bool advertisingIDEnabled; // @synthesize advertisingIDEnabled=_advertisingIDEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2;
- (_Bool)useSafariViewControllerForDialogName:(id)arg1;
- (_Bool)useNativeDialogForDialogName:(id)arg1;
- (id)dialogConfigurationForDialogName:(id)arg1;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 loginTooltipEnabled:(_Bool)arg3 loginTooltipText:(id)arg4 defaultShareMode:(id)arg5 advertisingIDEnabled:(_Bool)arg6 implicitLoggingEnabled:(_Bool)arg7 implicitPurchaseLoggingEnabled:(_Bool)arg8 codelessEventsEnabled:(_Bool)arg9 systemAuthenticationEnabled:(_Bool)arg10 nativeAuthFlowEnabled:(_Bool)arg11 uninstallTrackingEnabled:(_Bool)arg12 dialogConfigurations:(id)arg13 dialogFlows:(id)arg14 timestamp:(id)arg15 errorConfiguration:(id)arg16 sessionTimeoutInterval:(double)arg17 defaults:(_Bool)arg18 loggingToken:(id)arg19 smartLoginOptions:(unsigned long long)arg20 smartLoginBookmarkIconURL:(id)arg21 smartLoginMenuIconURL:(id)arg22 updateMessage:(id)arg23 eventBindings:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

