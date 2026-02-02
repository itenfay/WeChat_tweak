//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveReplayTaskId, MMFinderLiveReplayView;

@protocol MMFinderLiveReplayViewExt <NSObject>

@optional
- (void)onLiveReplayViewPlayerFrameChanged:(MMFinderLiveReplayView *)arg1 liveTaskId:(MMFinderLiveReplayTaskId *)arg2 newPlayerFrame:(struct CGRect)arg3;
@end

