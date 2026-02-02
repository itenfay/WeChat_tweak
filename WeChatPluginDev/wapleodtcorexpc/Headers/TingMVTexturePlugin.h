//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, TingMVTextureUpdateListenerApi;
@protocol FlutterTextureRegistry;

@interface TingMVTexturePlugin : NSObject
{
    NSObject<FlutterTextureRegistry> *_registry;
    NSMutableDictionary *_textureInfoMap;
    TingMVTextureUpdateListenerApi *_listener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TingMVTextureUpdateListenerApi *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSMutableDictionary *textureInfoMap; // @synthesize textureInfoMap=_textureInfoMap;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
- (id)getTextureTaskId:(id)arg1 listendId:(id)arg2 error:(id *)arg3;
- (void)disposeTaskId:(id)arg1 listendId:(id)arg2 error:(id *)arg3;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

