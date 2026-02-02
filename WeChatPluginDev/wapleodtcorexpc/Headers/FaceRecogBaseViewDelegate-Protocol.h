//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol FaceRecogBaseViewDelegate <NSObject>

@optional
- (NSString *)faceRecogVerifyGetFeedbackUrl;
- (void)faceRecogDidClickBizBtn;
- (void)faceRecogDidRotate;
- (void)faceRecogDidRetry;
- (void)faceRecogDidSuccess;
- (void)faceRecogDidClose;
- (void)faceRecogDidCancel;
@end

