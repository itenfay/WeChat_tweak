//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol ILiteAppJsApiPluginControllerProtocol;

@interface LiteAppJsApiPluginScheduler : NSObject
{
    id <ILiteAppJsApiPluginControllerProtocol> _ownerLiteAppController;
    NSMutableDictionary *_pluginName2InstanceDic;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak id <ILiteAppJsApiPluginControllerProtocol> ownerLiteAppController; // @synthesize ownerLiteAppController=_ownerLiteAppController;
- (void)loadingInitPluginArray;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)dealloc;
- (id)initWithOwnerLiteAppController:(id)arg1;

@end

