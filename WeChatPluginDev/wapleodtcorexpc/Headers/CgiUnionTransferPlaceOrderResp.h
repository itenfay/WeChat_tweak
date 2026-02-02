//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, InterceptWin, NSString, UninonTransferMsgCheckInfo;

@class WXPBGeneratedMessage;

@interface CgiUnionTransferPlaceOrderResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appmsgcontent; // @dynamic appmsgcontent;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *doubleCheckWording; // @dynamic doubleCheckWording;
@property(retain, nonatomic) InterceptWin *interceptWin; // @dynamic interceptWin;
@property(retain, nonatomic) UninonTransferMsgCheckInfo *msgCheckInfo; // @dynamic msgCheckInfo;
@property(retain, nonatomic) NSString *prepayId; // @dynamic prepayId;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(nonatomic) unsigned int returnToSession; // @dynamic returnToSession;
@property(retain, nonatomic) NSString *transferId; // @dynamic transferId;

@end

