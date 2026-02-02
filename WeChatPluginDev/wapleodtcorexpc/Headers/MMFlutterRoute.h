//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface MMFlutterRoute : NSObject
{
    _Bool _needGeneratedPlugin;
    NSString *_entry;
    NSString *_plugin;
    NSString *_route;
    NSDictionary *_params;
    NSString *_engineId;
    NSString *_paramsKey;
    NSString *_routeJson;
    NSNumber *_sharedIsolateMode;
}

+ (id)getEmojiParams;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *sharedIsolateMode; // @synthesize sharedIsolateMode=_sharedIsolateMode;
@property(retain, nonatomic) NSString *routeJson; // @synthesize routeJson=_routeJson;
@property(nonatomic) _Bool needGeneratedPlugin; // @synthesize needGeneratedPlugin=_needGeneratedPlugin;
@property(retain, nonatomic) NSString *paramsKey; // @synthesize paramsKey=_paramsKey;
@property(retain, nonatomic) NSString *engineId; // @synthesize engineId=_engineId;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
@property(retain, nonatomic) NSString *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSString *entry; // @synthesize entry=_entry;
- (id)getParamsJson;
- (id)getRouteJson;
- (id)getRoute;
- (id)initWithPlugin:(id)arg1 route:(id)arg2 params:(id)arg3;
- (id)initWithPlugin:(id)arg1 route:(id)arg2;
- (id)initWithPlugin:(id)arg1;

@end

