//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class OMJMoviePlayer;

@protocol OMJMoviePlayerDelegate <NSObject>

@optional
- (void)moviePlayer:(OMJMoviePlayer *)arg1 playbackTimeDidChange:(CDStruct_1b6d18a9)arg2 mediaTimeRange:(CDStruct_e83c9415)arg3;
- (void)playbackDidFinishInMoviePlayer:(OMJMoviePlayer *)arg1;
@end

