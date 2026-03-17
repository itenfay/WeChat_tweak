//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, WXGChatLogSessionViewController;

@protocol WXGChatLogSessionViewControllerDelegate <NSObject>
- (void)onCancelSelectSession;
- (void)onChatLogSession:(WXGChatLogSessionViewController *)arg1 selectSession:(NSArray *)arg2 selectAllTime:(_Bool)arg3 selectAllSession:(_Bool)arg4 selectTextOnly:(_Bool)arg5 minTime:(NSDate *)arg6 selectStartTime:(NSDate *)arg7 selectEndTime:(NSDate *)arg8;
@end

