//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface SetPaymentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindSerial; // @dynamic bindSerial;
@property(retain, nonatomic) NSString *certNo; // @dynamic certNo;
@property(nonatomic) unsigned int codeVer; // @dynamic codeVer;
@property(nonatomic) unsigned int residueNum; // @dynamic residueNum;
@property(nonatomic) unsigned int settingState; // @dynamic settingState;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(retain, nonatomic) NSString *tokenSrc; // @dynamic tokenSrc;

@end

