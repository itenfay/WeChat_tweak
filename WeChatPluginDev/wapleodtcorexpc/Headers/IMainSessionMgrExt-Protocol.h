//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMSessionInfo;

@protocol IMainSessionMgrExt <NSObject>
- (void)onMainSessionReload;

@optional
- (void)onMainFrameEndReload;
- (void)onMainFrameHandleSession:(MMSessionInfo *)arg1;
- (void)onMainFrameBeginReload;
@end

