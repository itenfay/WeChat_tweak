//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ChatroomMsgPack, GCImageMsgWrapper, GameChatRoomContact, NSString, SendChatroomMsgRequest;

@interface GCChatRoomMessage : NSObject
{
    _Bool _isLocalMessage;
    _Bool _isCache;
    _Bool _delaySend;
    NSString *_chatRoomName;
    unsigned long long _messageType;
    unsigned long long _messageSubType;
    NSString *_userName;
    GameChatRoomContact *_userContactInfo;
    NSString *_userChatRoomNickName;
    NSString *_cliMsgId;
    ChatroomMsgPack *_msgPack;
    SendChatroomMsgRequest *_sendMsgRequest;
    GCImageMsgWrapper *_imgMsgWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCImageMsgWrapper *imgMsgWrapper; // @synthesize imgMsgWrapper=_imgMsgWrapper;
@property(nonatomic) _Bool delaySend; // @synthesize delaySend=_delaySend;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) SendChatroomMsgRequest *sendMsgRequest; // @synthesize sendMsgRequest=_sendMsgRequest;
@property(retain, nonatomic) ChatroomMsgPack *msgPack; // @synthesize msgPack=_msgPack;
@property(retain, nonatomic) NSString *cliMsgId; // @synthesize cliMsgId=_cliMsgId;
@property(retain, nonatomic) NSString *userChatRoomNickName; // @synthesize userChatRoomNickName=_userChatRoomNickName;
@property(retain, nonatomic) GameChatRoomContact *userContactInfo; // @synthesize userContactInfo=_userContactInfo;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long messageSubType; // @synthesize messageSubType=_messageSubType;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName=_chatRoomName;
@property(nonatomic) _Bool isLocalMessage; // @synthesize isLocalMessage=_isLocalMessage;

@end

