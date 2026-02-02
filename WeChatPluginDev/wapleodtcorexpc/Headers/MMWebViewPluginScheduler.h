//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMWebViewController, NSMutableDictionary;

@interface MMWebViewPluginScheduler : NSObject
{
    MMWebViewController *_ownerWebViewController;
    NSMutableDictionary *_pluginName2InstanceDic;
}

+ (_Bool)isWebScrollEvent:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak MMWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)loadingInitPluginArray;
- (void)dealloc;
- (id)initWithOwnerWebViewController:(id)arg1;

@end

