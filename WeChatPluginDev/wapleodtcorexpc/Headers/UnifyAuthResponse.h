//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class AcctSectResp, AuthSectResp, AxAuthSecRespList, BaseResponse, HostAlgoList, NetworkSectResp;

@class WXPBGeneratedMessage;

@interface UnifyAuthResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) AcctSectResp *acctSectResp; // @dynamic acctSectResp;
@property(retain, nonatomic) AuthSectResp *authSectResp; // @dynamic authSectResp;
@property(retain, nonatomic) AxAuthSecRespList *axAuthSecRespList; // @dynamic axAuthSecRespList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) HostAlgoList *hostAlgoListResp; // @dynamic hostAlgoListResp;
@property(retain, nonatomic) NetworkSectResp *networkSectResp; // @dynamic networkSectResp;
@property(nonatomic) unsigned int unifyAuthSectFlag; // @dynamic unifyAuthSectFlag;

@end

