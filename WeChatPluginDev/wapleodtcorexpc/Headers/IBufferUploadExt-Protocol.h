//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IBufferUploadExt <NSObject>

@optional
- (void)OnBufferUploadOK:(NSString *)arg1 ClientAppDataId:(NSString *)arg2 MediaId:(NSString *)arg3;
- (void)OnBufferUploadFail:(NSString *)arg1 ClientAppDataId:(NSString *)arg2;
@end

