//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FaceRecogBaseHandler;

@protocol FaceRecogHandlerDelegate <NSObject>

@optional
- (void)faceRecogHandlerDidCancel:(FaceRecogBaseHandler *)arg1;
- (void)faceRecogHandlerDidFinish:(FaceRecogBaseHandler *)arg1;
@end

