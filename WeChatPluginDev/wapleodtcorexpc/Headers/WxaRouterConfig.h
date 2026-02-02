//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString;

@interface WxaRouterConfig : NSObject
{
    _Bool _isPreloadEngine;
    _Bool _isPreloadNextEngine;
    _Bool _isAutoReleaseEngine;
    _Bool _isReleaseDefaultEngineWhenEmptyView;
    NSString *_entryPoint;
    NSString *_initialRoute;
    NSArray *_entryPointArgs;
    NSMutableSet *_consumerSet;
    NSMutableSet *_pluginSet;
    NSArray *_dartVmArgs;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isReleaseDefaultEngineWhenEmptyView; // @synthesize isReleaseDefaultEngineWhenEmptyView=_isReleaseDefaultEngineWhenEmptyView;
@property(nonatomic) _Bool isAutoReleaseEngine; // @synthesize isAutoReleaseEngine=_isAutoReleaseEngine;
@property(nonatomic) _Bool isPreloadNextEngine; // @synthesize isPreloadNextEngine=_isPreloadNextEngine;
@property(nonatomic) _Bool isPreloadEngine; // @synthesize isPreloadEngine=_isPreloadEngine;
@property(retain, nonatomic) NSArray *dartVmArgs; // @synthesize dartVmArgs=_dartVmArgs;
@property(retain, nonatomic) NSMutableSet *pluginSet; // @synthesize pluginSet=_pluginSet;
@property(retain, nonatomic) NSMutableSet *consumerSet; // @synthesize consumerSet=_consumerSet;
@property(retain, nonatomic) NSArray *entryPointArgs; // @synthesize entryPointArgs=_entryPointArgs;
@property(retain, nonatomic) NSString *initialRoute; // @synthesize initialRoute=_initialRoute;
@property(retain, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
- (void)addFlutterPlugin:(id)arg1;
- (void)removeMethodConsumer:(id)arg1;
- (void)addMethodConsumer:(id)arg1;
- (id)init;

@end

