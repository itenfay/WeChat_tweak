//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSearchReportModel
{
    NSString *_sessionId;
    unsigned long long _scene;
    NSString *_msgId;
    NSString *_msgFromUserName;
    unsigned long long _chatType;
    NSString *_chatRoomId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatRoomId; // @synthesize chatRoomId=_chatRoomId;
@property(nonatomic) unsigned long long chatType; // @synthesize chatType=_chatType;
@property(copy, nonatomic) NSString *msgFromUserName; // @synthesize msgFromUserName=_msgFromUserName;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)initWithSNSItem:(id)arg1 chatType:(unsigned long long)arg2;
- (id)initWithMsgWrap:(id)arg1;
- (id)init;

@end

