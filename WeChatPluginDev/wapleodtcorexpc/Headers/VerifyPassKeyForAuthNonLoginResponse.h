//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NetworkSectResp, PassKeyLoginInfo;

@class WXPBGeneratedMessage;

@interface VerifyPassKeyForAuthNonLoginResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int mmTlsControlBitFlag; // @dynamic mmTlsControlBitFlag;
@property(retain, nonatomic) NetworkSectResp *networkSectResp; // @dynamic networkSectResp;
@property(retain, nonatomic) PassKeyLoginInfo *pwd; // @dynamic pwd;

@end

