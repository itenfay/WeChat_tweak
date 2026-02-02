//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, NoticeItem;

@interface CgiScanRewardQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSString *extendStr1; // @dynamic extendStr1;
@property(retain, nonatomic) NSString *extendStr2; // @dynamic extendStr2;
@property(nonatomic) unsigned int maxAmt; // @dynamic maxAmt;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *phoneUrl; // @dynamic phoneUrl;
@property(retain, nonatomic) NSString *receiverName; // @dynamic receiverName;
@property(retain, nonatomic) NSString *receiverNickname; // @dynamic receiverNickname;
@property(retain, nonatomic) NSString *receiverOpenId; // @dynamic receiverOpenId;
@property(retain, nonatomic) NSString *receiverTrueName; // @dynamic receiverTrueName;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *scanId; // @dynamic scanId;
@property(retain, nonatomic) NSString *upperRightStr; // @dynamic upperRightStr;

@end

