//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WxaRouterConfig;
@protocol LiteAppCallback;

@interface LiteAppMgr : NSObject
{
    _Bool _fontScaleFollowSystem;
    _Bool _isDarkMode;
    _Bool _localeFollowSystem;
    _Bool _hasLoadBaseLib;
    float _fontScale;
    float _statusBarHeight;
    id <LiteAppCallback> _callbackDelegate;
    NSMutableDictionary *_reporters;
    WxaRouterConfig *_config;
    NSString *_baseLibPath;
    NSString *_entryPoint;
    long long _setPathResult;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) long long setPathResult; // @synthesize setPathResult=_setPathResult;
@property(retain, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) NSString *baseLibPath; // @synthesize baseLibPath=_baseLibPath;
@property(nonatomic) _Bool hasLoadBaseLib; // @synthesize hasLoadBaseLib=_hasLoadBaseLib;
@property(retain, nonatomic) WxaRouterConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSMutableDictionary *reporters; // @synthesize reporters=_reporters;
@property(nonatomic) _Bool localeFollowSystem; // @synthesize localeFollowSystem=_localeFollowSystem;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) float statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) float fontScale; // @synthesize fontScale=_fontScale;
@property(nonatomic) _Bool fontScaleFollowSystem; // @synthesize fontScaleFollowSystem=_fontScaleFollowSystem;
@property(retain, nonatomic) id <LiteAppCallback> callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;
- (id)getViewController:(unsigned int)arg1;
- (id)getGlobalStore:(id)arg1;
- (void)removeGlobalStore:(id)arg1;
- (void)addGlobalStore:(id)arg1 store:(id)arg2;
- (void)addGlobalStore:(id)arg1 clz:(Class)arg2;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 obj:(id)arg3;
- (int)dispatchStore:(id)arg1 actionName:(id)arg2 json:(id)arg3;
- (void)updateVolume:(float)arg1;
- (void)updateLowPowerMode:(_Bool)arg1;
- (void)updateLowPower:(_Bool)arg1;
- (void)onOrientationChanged:(int)arg1;
- (void)updateDarkMode:(_Bool)arg1;
- (void)releaseFlutterEngine:(_Bool)arg1;
- (void)releaseFlutterEngine;
- (id)initialRoute;
- (void)releaseBaseLib;
- (int)loadBaseLib:(id)arg1;
- (int)preloadBaseLibWithExtends:(id)arg1;
- (int)preloadBaseLib;
- (id)preparedRouter;
- (void)setFlutterEntryPoint:(id)arg1;
- (unsigned int)genLiteAppUuid;
- (id)init;

@end

