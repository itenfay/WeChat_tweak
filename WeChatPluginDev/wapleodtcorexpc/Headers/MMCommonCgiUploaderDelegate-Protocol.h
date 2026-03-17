//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCommonCgiUploader, MMCommonUploadResult, NSString;

@protocol MMCommonCgiUploaderDelegate <NSObject>
- (void)onUploadProgress:(MMCommonCgiUploader *)arg1 uploadProgress:(double)arg2;
- (void)onUploadFail:(MMCommonCgiUploader *)arg1 uploadId:(NSString *)arg2 retCode:(long long)arg3;
- (void)onUploadSuccess:(MMCommonCgiUploader *)arg1 result:(MMCommonUploadResult *)arg2;
@end

