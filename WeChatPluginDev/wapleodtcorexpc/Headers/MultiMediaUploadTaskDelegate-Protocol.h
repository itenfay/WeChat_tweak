//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MultiMediaUploadTask;

@protocol MultiMediaUploadTaskDelegate <NSObject>
- (void)OnMultiMediaUploadTask:(MultiMediaUploadTask *)arg1 progressChange:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnMultiMediaUploadTaskSucc:(MultiMediaUploadTask *)arg1;
- (void)OnMultiMediaUploadTaskFail:(MultiMediaUploadTask *)arg1;
@end

