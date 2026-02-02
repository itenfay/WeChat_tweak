//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BizFinderLivePlayersCallbackApi, NSMutableDictionary, NSString;
@protocol FlutterTextureRegistry;

@interface BTLFinderLiveTexturePlugin : NSObject
{
    NSMutableDictionary *_playerItemsMap;
    NSObject<FlutterTextureRegistry> *_registry;
    BizFinderLivePlayersCallbackApi *_callback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BizFinderLivePlayersCallbackApi *callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSObject<FlutterTextureRegistry> *registry; // @synthesize registry=_registry;
@property(retain, nonatomic) NSMutableDictionary *playerItemsMap; // @synthesize playerItemsMap=_playerItemsMap;
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)destroyPlayerId:(long long)arg1 error:(id *)arg2;
- (void)createPlayerFinderLivePlayInfo:(id)arg1 autoPlay:(_Bool)arg2 playOffset:(long long)arg3 completion:(CDUnknownBlockType)arg4;
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

