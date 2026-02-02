//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, FaceRecogUploadLogic, NSString;

@protocol FaceRecogUploadLogicDelegate <NSObject>

@optional
- (void)onGetFaceVideoFinish:(NSString *)arg1 inWorkMode:(long long)arg2;
- (void)onUploadFaceVideoFinish:(FaceRecogUploadLogic *)arg1;
- (void)onUploadFaceResultFinish:(CdnUploadTaskInfo *)arg1;
@end

