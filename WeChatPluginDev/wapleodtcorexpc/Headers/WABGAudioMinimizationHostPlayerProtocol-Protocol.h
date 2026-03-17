//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WABGAudioMinimizationItemInfo;

@protocol WABGAudioMinimizationHostPlayerProtocol <NSObject>
- (_Bool)isPlaying:(WABGAudioMinimizationItemInfo *)arg1;
- (void)onMinimizeTaskClosed:(WABGAudioMinimizationItemInfo *)arg1;
- (void)onMinimizeTaskStateChangeToMaximized:(WABGAudioMinimizationItemInfo *)arg1;
@end

