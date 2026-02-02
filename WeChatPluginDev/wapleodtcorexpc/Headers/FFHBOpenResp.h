//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InterceptWin, NSData, NSString, RealNameInfo;

@interface FFHBOpenResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *changeUrl; // @dynamic changeUrl;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(nonatomic) unsigned int errorType; // @dynamic errorType;
@property(retain, nonatomic) NSString *externMess; // @dynamic externMess;
@property(retain, nonatomic) NSData *halfPageInfo; // @dynamic halfPageInfo;
@property(nonatomic) int hbStatus; // @dynamic hbStatus;
@property(retain, nonatomic) InterceptWin *interceptWin; // @dynamic interceptWin;
@property(nonatomic) int isLucky; // @dynamic isLucky;
@property(nonatomic) int jumpChange; // @dynamic jumpChange;
@property(retain, nonatomic) NSData *leftButtonContinue; // @dynamic leftButtonContinue;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendHeadImage; // @dynamic sendHeadImage;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(retain, nonatomic) NSString *sendNickName; // @dynamic sendNickName;
@property(retain, nonatomic) NSString *sendUserName; // @dynamic sendUserName;

@end

