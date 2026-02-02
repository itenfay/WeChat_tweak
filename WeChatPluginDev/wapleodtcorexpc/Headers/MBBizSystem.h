//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MagicBrushService, NSMutableDictionary;
@protocol IMBPluginProxy, IMBPublicServiceProxy;

@interface MBBizSystem : NSObject
{
    id <IMBPublicServiceProxy> _publicServiceProxy;
    id <IMBPluginProxy> _pluginProxy;
    MagicBrushService *_service;
    NSMutableDictionary *_bizDict;
    NSMutableDictionary *_publicServiceRC;
    NSMutableDictionary *_serviceToBizMessages;
    NSMutableDictionary *_bizToServiceMessages;
    NSMutableDictionary *_psDelayDestroyBlocksDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *psDelayDestroyBlocksDict; // @synthesize psDelayDestroyBlocksDict=_psDelayDestroyBlocksDict;
@property(retain, nonatomic) NSMutableDictionary *bizToServiceMessages; // @synthesize bizToServiceMessages=_bizToServiceMessages;
@property(retain, nonatomic) NSMutableDictionary *serviceToBizMessages; // @synthesize serviceToBizMessages=_serviceToBizMessages;
@property(retain, nonatomic) NSMutableDictionary *publicServiceRC; // @synthesize publicServiceRC=_publicServiceRC;
@property(retain, nonatomic) NSMutableDictionary *bizDict; // @synthesize bizDict=_bizDict;
@property(nonatomic) __weak MagicBrushService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <IMBPluginProxy> pluginProxy; // @synthesize pluginProxy=_pluginProxy;
@property(nonatomic) __weak id <IMBPublicServiceProxy> publicServiceProxy; // @synthesize publicServiceProxy=_publicServiceProxy;
- (_Bool)injectPlugin:(id)arg1 intoBiz:(id)arg2;
- (id)getBiz:(id)arg1;
- (id)createBiz:(id)arg1;
- (id)init;
- (id)getPublicService:(id)arg1 biz:(id)arg2;
- (void)biz:(id)arg1 listenToPublicService:(id)arg2;
- (void)postMessage:(id)arg1 toBiz:(id)arg2 fromPublicService:(id)arg3;
- (void)publicService:(id)arg1 listenToBiz:(id)arg2;
- (void)postMessage:(id)arg1 toPublicService:(id)arg2 fromBiz:(id)arg3;
- (void)forceStop:(id)arg1;
- (void)destroyAllBizesForPublicService:(id)arg1;
- (void)unbindAllPublicServiceForBiz:(id)arg1;
- (void)unbindPublicService:(id)arg1 biz:(id)arg2;
- (_Bool)bindPublicService:(id)arg1 biz:(id)arg2;
- (void)setupPublicServiceCategory;

@end

