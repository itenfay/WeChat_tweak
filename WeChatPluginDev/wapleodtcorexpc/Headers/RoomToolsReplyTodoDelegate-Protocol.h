//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RoomToolsReplyTodoCgi, WCBaseNetworkingError;

@protocol RoomToolsReplyTodoDelegate <NSObject>

@optional
- (void)RoomToolsReplyTodoFail:(RoomToolsReplyTodoCgi *)arg1 error:(WCBaseNetworkingError *)arg2;
- (void)RoomToolsReplyTodoSuccess:(RoomToolsReplyTodoCgi *)arg1;
@end

