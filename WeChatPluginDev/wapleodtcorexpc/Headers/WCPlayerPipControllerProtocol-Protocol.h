//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol WCPlayerPipControllerProtocol <NSObject>
- (void)failToStartPictureInPictureWithError:(NSError *)arg1;
- (void)restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)pictureInPictureStateDidChange:(long long)arg1;
@end

