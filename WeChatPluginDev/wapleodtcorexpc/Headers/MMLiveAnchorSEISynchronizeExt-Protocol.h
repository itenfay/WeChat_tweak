//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveAnchorSEIInfo, MMLiveTaskId;
@protocol MMLiveUniqueTaskId;

@protocol MMLiveAnchorSEISynchronizeExt <NSObject>

@optional
- (void)onSynchronizedSEIAnchoInfo:(MMLiveAnchorSEIInfo *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onLiveAnchorSEISynchronizeUnRegistered:(MMLiveTaskId *)arg1;
- (void)onLiveAnchorSEISynchronizeRegistered:(MMLiveTaskId *)arg1;
@end

