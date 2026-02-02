//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPictureInPictureController;

@protocol AVPictureInPictureSampleBufferPlaybackDelegate <NSObject>
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 skipByInterval:(CDStruct_1b6d18a9)arg2 completionHandler:(void (^)(void))arg3;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 didTransitionToRenderSize:(CDStruct_1ef3fb1f)arg2;
- (_Bool)pictureInPictureControllerIsPlaybackPaused:(AVPictureInPictureController *)arg1;
- (CDStruct_e83c9415)pictureInPictureControllerTimeRangeForPlayback:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 setPlaying:(_Bool)arg2;

@optional
- (_Bool)pictureInPictureControllerShouldProhibitBackgroundAudioPlayback:(AVPictureInPictureController *)arg1;
@end

