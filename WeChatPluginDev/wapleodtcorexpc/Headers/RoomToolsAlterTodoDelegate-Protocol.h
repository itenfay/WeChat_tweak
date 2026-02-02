//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RoomToolsAlterTodoCgi, WCBaseNetworkingError;

@protocol RoomToolsAlterTodoDelegate <NSObject>

@optional
- (void)RoomToolsAlterTodoFail:(RoomToolsAlterTodoCgi *)arg1 error:(WCBaseNetworkingError *)arg2;
- (void)RoomToolsAlterTodoSuccess:(RoomToolsAlterTodoCgi *)arg1;
@end

