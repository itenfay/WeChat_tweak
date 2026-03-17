//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CdnUploadTaskInfo, NSString;

@protocol FaceRecogBaseHandlerDelegate <NSObject>

@optional
- (void)didGetFaceFlashData:(NSString *)arg1 inWorkMode:(long long)arg2;
- (void)didAccessLocation:(double)arg1 longitude:(double)arg2;
- (void)didUploadFaceData:(CdnUploadTaskInfo *)arg1;
@end

