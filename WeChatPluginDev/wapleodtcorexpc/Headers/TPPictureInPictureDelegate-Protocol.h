//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, TPPictureInPictureController;

@protocol TPPictureInPictureDelegate <NSObject>
- (void)pictureInPictureController:(TPPictureInPictureController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(TPPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(TPPictureInPictureController *)arg1;
- (void)pictureInPictureController:(TPPictureInPictureController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(TPPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(TPPictureInPictureController *)arg1;
@end

