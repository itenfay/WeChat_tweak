//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiteAppJsApiPluginScheduler, NSMutableDictionary, NSString;

@interface MMLiteAppWidgetHandler : NSObject
{
    _Bool _statusBarHidden;
    _Bool _homeIndicatorHidden;
    _Bool _isPopGestureEnable;
    _Bool _forbidRightGestureEnable;
    unsigned int _appUuid;
    int _lastFlags;
    NSString *_appId;
    CDUnknownBlockType _willdisappearBlock;
    CDUnknownBlockType _darkModeChangeBlock;
    unsigned long long _interfaceOrientationMask;
    long long _interfaceOrientation;
    LiteAppJsApiPluginScheduler *_jsApiPluginScheduler;
    NSMutableDictionary *_extraData;
    long long _storeUiStatusBarStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long storeUiStatusBarStyle; // @synthesize storeUiStatusBarStyle=_storeUiStatusBarStyle;
@property(retain, nonatomic) NSMutableDictionary *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) LiteAppJsApiPluginScheduler *jsApiPluginScheduler; // @synthesize jsApiPluginScheduler=_jsApiPluginScheduler;
@property(nonatomic) _Bool forbidRightGestureEnable; // @synthesize forbidRightGestureEnable=_forbidRightGestureEnable;
@property(nonatomic) _Bool isPopGestureEnable; // @synthesize isPopGestureEnable=_isPopGestureEnable;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) unsigned long long interfaceOrientationMask; // @synthesize interfaceOrientationMask=_interfaceOrientationMask;
@property(nonatomic) _Bool homeIndicatorHidden; // @synthesize homeIndicatorHidden=_homeIndicatorHidden;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) int lastFlags; // @synthesize lastFlags=_lastFlags;
@property(copy, nonatomic) CDUnknownBlockType darkModeChangeBlock; // @synthesize darkModeChangeBlock=_darkModeChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType willdisappearBlock; // @synthesize willdisappearBlock=_willdisappearBlock;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)initWithAppId:(id)arg1 appUuid:(unsigned int)arg2;

@end

