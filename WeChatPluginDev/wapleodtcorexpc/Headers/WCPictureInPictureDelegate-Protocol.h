//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, WCPictureInPictureController;

@protocol WCPictureInPictureDelegate <NSObject>
- (void)pictureInPictureController:(WCPictureInPictureController *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg2;
- (void)pictureInPictureControllerDidStopPictureInPicture:(WCPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(WCPictureInPictureController *)arg1;
- (void)pictureInPictureController:(WCPictureInPictureController *)arg1 failedToStartPictureInPictureWithError:(NSError *)arg2;
- (void)pictureInPictureControllerDidStartPictureInPicture:(WCPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStartPictureInPicture:(WCPictureInPictureController *)arg1;
- (void)onPictureInPicturePossibleChanged:(_Bool)arg1;
@end

