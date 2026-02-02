//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogPayHandler;

@protocol FaceRecogPayHandlerDelegate <NSObject>

@optional
- (void)faceRecogPayHandlerDidCancel:(FaceRecogPayHandler *)arg1;
- (void)faceRecogPayHandlerDidFinish:(FaceRecogPayHandler *)arg1;
@end

