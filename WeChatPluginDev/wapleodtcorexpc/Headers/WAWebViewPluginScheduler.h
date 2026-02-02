//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WAWebViewController;

@interface WAWebViewPluginScheduler : NSObject
{
    WAWebViewController *_ownerWebViewController;
    NSMutableDictionary *_pluginName2InstanceDic;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak WAWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)loadPluginForEvent:(unsigned long long)arg1;
- (id)GetPluginInstanceIfExsist:(id)arg1;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)createPluginInstanceIfNotExsist:(id)arg1;
- (void)loadingInitPluginArray;
- (void)dealloc;
- (id)initWithOwnerWebViewController:(id)arg1;

@end

