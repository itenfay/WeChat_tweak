//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TPDLProxyPreloadDelegate <NSObject>

@optional
- (void)onPrepareDownloadProgressUpdateWithPlayableDuration:(int)arg1 downloadSpeedKBs:(int)arg2 currentDownloadSizeByte:(long long)arg3 totalFileSizeByte:(long long)arg4 extInfo:(NSString *)arg5;
- (void)onPrepareErrorWithModuleId:(int)arg1 errorCode:(int)arg2 extInfo:(NSString *)arg3;
- (void)onPrepareSuccess;
@end

