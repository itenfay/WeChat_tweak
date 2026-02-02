//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol WSWebViewPluginableProtocol;

@interface WSWebViewPluginScheduler : NSObject
{
    id <WSWebViewPluginableProtocol> _webViewOwner;
    NSMutableDictionary *_pluginInstanceDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pluginInstanceDict; // @synthesize pluginInstanceDict=_pluginInstanceDict;
@property(nonatomic) __weak id <WSWebViewPluginableProtocol> webViewOwner; // @synthesize webViewOwner=_webViewOwner;
- (void)observeLifeCircleFor:(id)arg1;
- (id)loadPlugin:(id)arg1;
- (id)loadPluginWith:(id)arg1;
- (void)loadingPlugins:(id)arg1;
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;
- (id)getExistPluginInstanceByName:(id)arg1;
- (id)getPluginInstanceByName:(id)arg1;
- (_Bool)containPlugin:(id)arg1;
- (void)registerPlugin:(id)arg1;
- (void)registerPlugins:(id)arg1;
- (id)initWithWebViewOwner:(id)arg1 preloadPlugins:(id)arg2;
- (id)initWithWebViewOwner:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onApplicationDidRotate:(id)arg1;
- (void)onApplicationEnterForeground:(id)arg1;
- (void)onApplicationEnterBackground:(id)arg1;
- (void)observeNotifications;

@end

