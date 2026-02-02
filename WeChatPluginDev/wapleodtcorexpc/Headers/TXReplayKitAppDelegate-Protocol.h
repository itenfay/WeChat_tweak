//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXReplayKitAppDelegate <NSObject>

@optional
- (void)onBroadcastExtStarted;
- (void)onBroadcastExtResumed;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtFinished;
- (void)onReceiveAudioPacket:(const void *)arg1;
- (void)onReceiveVideoPacket:(const void *)arg1;
@end

