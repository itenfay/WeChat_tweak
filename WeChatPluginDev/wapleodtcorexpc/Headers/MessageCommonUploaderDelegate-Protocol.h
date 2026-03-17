//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMCommonUploadResult, MessageCommonUploader, NSString;

@protocol MessageCommonUploaderDelegate <NSObject>
- (void)messageUploaderProgress:(MessageCommonUploader *)arg1 progress:(double)arg2;
- (void)messageUploaderFailure:(MessageCommonUploader *)arg1 uploadId:(NSString *)arg2;
- (void)messageUploaderSuccess:(MessageCommonUploader *)arg1 result:(MMCommonUploadResult *)arg2;
@end

