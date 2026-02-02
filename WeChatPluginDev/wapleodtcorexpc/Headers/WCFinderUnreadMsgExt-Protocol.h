//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMSessionInfo;

@protocol WCFinderUnreadMsgExt <NSObject>

@optional
- (void)onFinderStopReceiveMsg;
- (void)onFinderReceiveMsg:(MMSessionInfo *)arg1;
@end

