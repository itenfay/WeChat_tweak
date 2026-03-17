//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCUploadTask;

@protocol WCUploadPendingExt <NSObject>

@optional
- (void)onPendingTaskRemovedForFail:(NSString *)arg1 forBusiness:(int)arg2;
- (void)onPendingTaskUpdatedForFail:(NSString *)arg1 forBusiness:(int)arg2 removedFromPending:(_Bool)arg3;
- (void)onPendingTaskUploaded:(NSString *)arg1 forBusiness:(int)arg2 prepareUploadTask:(WCUploadTask *)arg3;
@end

