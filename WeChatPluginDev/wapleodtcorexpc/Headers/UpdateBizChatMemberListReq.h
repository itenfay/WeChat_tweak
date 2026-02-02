//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, BizChatMemberList, NSString;

@interface UpdateBizChatMemberListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BizChatMemberList *addMemberList; // @dynamic addMemberList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bizchatId; // @dynamic bizchatId;
@property(retain, nonatomic) NSString *brandUserName; // @dynamic brandUserName;
@property(retain, nonatomic) BizChatMemberList *delMemberList; // @dynamic delMemberList;

@end

