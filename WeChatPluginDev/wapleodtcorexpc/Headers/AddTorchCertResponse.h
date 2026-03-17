//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderEventBaseResponse, NSString, TorchCert;

@class WXPBGeneratedMessage;

@interface AddTorchCertResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) TorchCert *torchCert; // @dynamic torchCert;
@property(retain, nonatomic) NSString *verifyInfoCert; // @dynamic verifyInfoCert;

@end

