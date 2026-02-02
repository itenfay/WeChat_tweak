//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPictureInPictureController, NSError;

@protocol AVPictureInPictureControllerDelegate <NSObject>

@optional
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureController:(AVPictureInPictureController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController *)arg1;
@end

