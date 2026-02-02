//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomToolMessageEventInfo, NSString;
@protocol RoomToolsReplyTodoDelegate;

@interface RoomToolsReplyTodoCgi
{
    id <RoomToolsReplyTodoDelegate> _delegate;
    NSString *_identifier;
    ChatRoomToolMessageEventInfo *_eventInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatRoomToolMessageEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RoomToolsReplyTodoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)cgiReplyTodo:(id)arg1 chatName:(id)arg2;
- (_Bool)setChatRoomToolsReplyTodo:(id)arg1 withMessageEventInfo:(id)arg2;
- (id)init;

@end

