//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface TransToBankCardPayReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bankCardSeqno; // @dynamic bankCardSeqno;
@property(retain, nonatomic) NSString *bankCardTailno; // @dynamic bankCardTailno;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *encryptData; // @dynamic encryptData;
@property(nonatomic) unsigned int enterTimeScene; // @dynamic enterTimeScene;
@property(nonatomic) unsigned int inputType; // @dynamic inputType;
@property(retain, nonatomic) NSString *lastTransferBillId; // @dynamic lastTransferBillId;
@property(nonatomic) unsigned int poundage; // @dynamic poundage;
@property(nonatomic) unsigned int transferAmt; // @dynamic transferAmt;
@property(retain, nonatomic) NSString *transferExplain; // @dynamic transferExplain;
@property(retain, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned int unpayType; // @dynamic unpayType;

@end

