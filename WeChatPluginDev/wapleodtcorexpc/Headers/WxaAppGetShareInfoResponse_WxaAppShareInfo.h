//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, WxaAppGetShareInfoResponse_WxaAppShareInfo_ChatToolMsgInfo, WxaAppGetShareInfoResponse_WxaAppShareInfo_ToDoMsgInfo, WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo;

@interface WxaAppGetShareInfoResponse_WxaAppShareInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_ChatToolMsgInfo *chattoolmsgInfo; // @dynamic chattoolmsgInfo;
@property(nonatomic) _Bool isChattoolmsg; // @dynamic isChattoolmsg;
@property(nonatomic) _Bool isSecretmsg; // @dynamic isSecretmsg;
@property(nonatomic) _Bool isTodomsg; // @dynamic isTodomsg;
@property(nonatomic) _Bool isUpdatablemsg; // @dynamic isUpdatablemsg;
@property(retain, nonatomic) NSString *shareKey; // @dynamic shareKey;
@property(retain, nonatomic) NSString *shareName; // @dynamic shareName;
@property(retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_ToDoMsgInfo *todoMsgInfo; // @dynamic todoMsgInfo;
@property(retain, nonatomic) WxaAppGetShareInfoResponse_WxaAppShareInfo_UpdatableMsgInfo *updateablemsgInfo; // @dynamic updateablemsgInfo;

@end

