//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, InterceptWin, NSString;

@interface FFHBRequestResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *idSign; // @dynamic idSign;
@property(retain, nonatomic) InterceptWin *interceptWin; // @dynamic interceptWin;
@property(retain, nonatomic) NSString *reqkey; // @dynamic reqkey;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;

@end

