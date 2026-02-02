//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString, TPVideoFrameBuffer, TingItem, TingPlayerContext, TingPlayerDisplayElement, TingPlayerEventContext, TingTapeItem;
@protocol TingFlowPlayerProtocol;

@protocol TingFlowPlayerNotification <NSObject>

@optional
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayerInfoEvent:(int)arg2 message:(NSData *)arg3;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onFlowPlayerEvent:(int)arg2 previousStatus:(int)arg3 currentStatus:(int)arg4 message:(NSString *)arg5;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayListRefresh:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onDisplayViewMTKViewCreated:(TingItem *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onAutoRecommendEnabledChanged:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayRateChanged:(double)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 onDisplayElementFrameBufferOut:(TPVideoFrameBuffer *)arg3;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onEndPlayingItemReplaced:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayingItemReplaced:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onStartPlayingItemReplaced:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayingContextUpdated:(TingPlayerContext *)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onItemLoaded:(TingItem *)arg2;
- (void)flowPlayerOnReloadPlayList:(id <TingFlowPlayerProtocol>)arg1;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 onDisplayElementAvailable:(TingPlayerDisplayElement *)arg3;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 willChangeFromCurrentSource:(TingTapeItem *)arg2 targetSource:(TingTapeItem *)arg3;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayModeChanged:(int)arg2;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 onStatusChanged:(int)arg3 onEvent:(int)arg4 withContext:(TingPlayerContext *)arg5 withEventContext:(TingPlayerEventContext *)arg6 error:(NSError *)arg7;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 onEvent:(int)arg3 error:(NSError *)arg4;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 onPlayTaskStatusChanged:(int)arg2 tingItem:(TingItem *)arg3 onEvent:(int)arg4 withContext:(TingPlayerEventContext *)arg5;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 onStatusChanged:(int)arg3;
- (void)flowPlayer:(id <TingFlowPlayerProtocol>)arg1 tingItem:(TingItem *)arg2 updateCurrentTime:(double)arg3 displayTime:(double)arg4 duration:(double)arg5;
@end

