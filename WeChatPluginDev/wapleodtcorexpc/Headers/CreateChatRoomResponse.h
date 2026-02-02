//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface CreateChatRoomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(retain, nonatomic) SKBuiltinString_t *chatRoomName; // @dynamic chatRoomName;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int memberCount; // @dynamic memberCount;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(retain, nonatomic) SKBuiltinString_t *pyinitial; // @dynamic pyinitial;
@property(retain, nonatomic) SKBuiltinString_t *quanPin; // @dynamic quanPin;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;
@property(retain, nonatomic) SKBuiltinString_t *topic; // @dynamic topic;

@end

