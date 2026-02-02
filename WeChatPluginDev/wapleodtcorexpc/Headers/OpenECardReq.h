//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface OpenECardReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankCardInfo; // @dynamic bankCardInfo;
@property(retain, nonatomic) NSString *bankCardNoEnc; // @dynamic bankCardNoEnc;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ecardType; // @dynamic ecardType;
@property(nonatomic) unsigned int fromScene; // @dynamic fromScene;
@property(nonatomic) int isRepeatSend; // @dynamic isRepeatSend;
@property(nonatomic) _Bool isReuseExistingEcard; // @dynamic isReuseExistingEcard;
@property(retain, nonatomic) NSString *mobileNo; // @dynamic mobileNo;
@property(nonatomic) unsigned int openScene; // @dynamic openScene;
@property(retain, nonatomic) NSString *parentBindSerialno; // @dynamic parentBindSerialno;
@property(retain, nonatomic) NSString *reqSerial; // @dynamic reqSerial;

@end

