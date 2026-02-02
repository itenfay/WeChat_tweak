//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, ChatRoomToolMessageEventInfo, NSString;
@protocol RoomToolsAlterTodoDelegate;

@interface RoomToolsAlterTodoCgi
{
    id <RoomToolsAlterTodoDelegate> _delegate;
    NSString *_identifier;
    ChatRoomToolMessageEventInfo *_eventInfo;
    CMessageWrap *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *message; // @synthesize message=_message;
@property(retain, nonatomic) ChatRoomToolMessageEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <RoomToolsAlterTodoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)cgiRevokeTodo:(id)arg1 chatName:(id)arg2;
- (void)cgiUpdateTodo:(id)arg1 chatName:(id)arg2;
- (id)init;

@end

