//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MegaVideoPlayerCallbackApi, NSString;

@interface LVPlayerServicePlugin : NSObject
{
    MegaVideoPlayerCallbackApi *_playerApiCallback;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MegaVideoPlayerCallbackApi *playerApiCallback; // @synthesize playerApiCallback=_playerApiCallback;
- (id)getCurrentPlayMsPlayerId:(long long)arg1 error:(id *)arg2;
- (void)pausePlayerId:(long long)arg1 error:(id *)arg2;
- (void)stopPlayerId:(long long)arg1 error:(id *)arg2;
- (void)playPlayerId:(long long)arg1 error:(id *)arg2;
- (void)releasePlayerId:(long long)arg1 error:(id *)arg2;
- (void)createPlayerTexturePlayItem:(id)arg1 autoPlay:(_Bool)arg2 playOffset:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
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

