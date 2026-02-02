//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveAnchorSEIInfo, MMLiveCommonSEIMsg, NSData, UIImage;

@protocol MMLiveCDNPlayerViewDelegate <NSObject>

@optional
- (void)onPlayVideoBackViewVisibleChanged:(_Bool)arg1;
- (void)onPlayEventRecvAnchorSEIInfo:(MMLiveAnchorSEIInfo *)arg1;
- (void)onPlayAudioModeChange:(_Bool)arg1;
- (void)onPlayEventRecvSEI:(MMLiveCommonSEIMsg *)arg1;
- (void)onPlayViewCoverLoadFinish:(UIImage *)arg1;
- (void)onPlayMuteForExternalPlaybackMode;
- (void)onPlayMuteByNotifyOuter:(_Bool)arg1;
- (void)onPlayMessageReceive:(NSData *)arg1;
- (void)onPlayChangeSize:(struct CGSize)arg1;
- (void)onPlayWarningReconnect;
- (void)onPlayDisconnect;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayEnd;
- (void)onPlayBegin;
- (void)onPlayLiveConnectSuccessful;
@end

