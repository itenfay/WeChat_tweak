//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData, NSString;

@interface ReceiveWxaHBResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *errorwording; // @dynamic errorwording;
@property(nonatomic) int hbStatus; // @dynamic hbStatus;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(nonatomic) int isSender; // @dynamic isSender;
@property(nonatomic) int receiveStatus; // @dynamic receiveStatus;
@property(retain, nonatomic) NSString *sendHeadimg; // @dynamic sendHeadimg;
@property(retain, nonatomic) NSString *sendNickname; // @dynamic sendNickname;
@property(retain, nonatomic) NSString *sendUsername; // @dynamic sendUsername;
@property(retain, nonatomic) NSData *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;
@property(nonatomic) unsigned int wxahbStatus; // @dynamic wxahbStatus;

@end

