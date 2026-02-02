//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicUsersInfo, NSString;

@protocol MMFinderLiveReplayMicInfoDisplayLogicDelegate <NSObject>
- (NSString *)onVideoPlayerPipBusinessIdRequested;

@optional
- (void)onMicInfoDisplayLogicStateUpdated:(MMFinderLiveConnectMicUsersInfo *)arg1 connectMicStateValid:(_Bool)arg2 anchorInAudioMode:(_Bool)arg3 isScreenSharing:(_Bool)arg4 isAudioDisplayMode:(_Bool)arg5;
@end

