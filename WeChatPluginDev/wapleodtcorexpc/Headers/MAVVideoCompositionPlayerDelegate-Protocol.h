//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MAVVideoCompositionPlayer;

@protocol MAVVideoCompositionPlayerDelegate <NSObject>
- (void)videoCompositionPlayerError:(MAVVideoCompositionPlayer *)arg1;
- (void)videoCompositionPlayerProgressUpdated:(MAVVideoCompositionPlayer *)arg1 currentTime:(CDStruct_1b6d18a9)arg2;
- (void)videoCompositionPlayerPlayCompleted:(MAVVideoCompositionPlayer *)arg1;
- (void)videoCompositionPlayerStopped:(MAVVideoCompositionPlayer *)arg1;
- (void)videoCompositionPlayerStarted:(MAVVideoCompositionPlayer *)arg1;
@end

