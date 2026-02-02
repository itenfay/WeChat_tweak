//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIImage;

@protocol V2TXLivePlayerJSAdapterDelegate <NSObject>

@optional
- (void)onConfigApplied:(_Bool)arg1;
- (void)onSetLivePlaying;
- (void)onSnapshotComplete:(UIImage *)arg1;
- (void)onAudioVolumeEvaluation:(long long)arg1;
- (void)onNetStatus:(NSDictionary *)arg1;
- (void)onPlayEvent:(long long)arg1 withParam:(NSDictionary *)arg2;
@end

