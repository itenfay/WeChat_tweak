//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NetworkSectResp, PassKeyLoginInfo;

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

