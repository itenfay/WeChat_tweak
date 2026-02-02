//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizAppMsgRelatedInfoResp_AppMsgFriendInfo, BizAppMsgRelatedInfoResp_AppMsgPayInfo, NSString;

@interface BizAppMsgRelatedInfoResp_AppMsgRelatedInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgFriendInfo *friendInfo; // @dynamic friendInfo;
@property(retain, nonatomic) NSString *friendReadCountStr; // @dynamic friendReadCountStr;
@property(retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgPayInfo *payInfo; // @dynamic payInfo;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSString *wordingReportInfo; // @dynamic wordingReportInfo;

@end

