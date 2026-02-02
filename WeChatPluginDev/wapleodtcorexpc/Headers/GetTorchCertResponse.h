//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseResponse, NSString, TorchCert;

@interface GetTorchCertResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) TorchCert *torchCert; // @dynamic torchCert;
@property(retain, nonatomic) NSString *verifyInfoCert; // @dynamic verifyInfoCert;

@end

