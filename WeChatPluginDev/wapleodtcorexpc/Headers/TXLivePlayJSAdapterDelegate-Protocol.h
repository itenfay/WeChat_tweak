//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@protocol TXLivePlayJSAdapterDelegate <NSObject>

@optional
- (void)onPlayerEvent:(NSString *)arg1 param:(NSDictionary *)arg2 toWebview:(_Bool)arg3;
- (UIViewController *)getWebViewController;
- (struct CGRect)fullScreenFrame;
- (void)onLivePlayerCallBack:(_Bool)arg1 errNo:(long long)arg2 errMsg:(NSString *)arg3;
- (void)onAudioVolumeEvaluation:(unsigned int)arg1 volume:(int)arg2;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 playerId:(unsigned int)arg3;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPlayNetStatus:(NSDictionary *)arg1 playerId:(unsigned int)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(NSString *)arg2 playerId:(unsigned int)arg3 param:(NSDictionary *)arg4;
- (void)onVideoEvent:(NSString *)arg1 playerId:(unsigned int)arg2;
@end

