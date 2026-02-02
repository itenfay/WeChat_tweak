//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, PopUp, WalletGrayArea, WalletKeyInfo, WalletNotice, WalletRequestInfo, WalletThreePointArea, WalletTitle;

@interface PayIBGGetOverseaWalletResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) _Bool canSwitchWallet; // @dynamic canSwitchWallet;
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) PopUp *popUp; // @dynamic popUp;
@property(retain, nonatomic) WalletGrayArea *walletGrayArea; // @dynamic walletGrayArea;
@property(retain, nonatomic) WalletKeyInfo *walletKeyInfo; // @dynamic walletKeyInfo;
@property(retain, nonatomic) WalletNotice *walletNotice; // @dynamic walletNotice;
@property(nonatomic) unsigned int walletRegion; // @dynamic walletRegion;
@property(retain, nonatomic) NSString *walletRegionDesc; // @dynamic walletRegionDesc;
@property(retain, nonatomic) NSMutableArray *walletRegionDescArray; // @dynamic walletRegionDescArray;
@property(retain, nonatomic) WalletRequestInfo *walletRequest; // @dynamic walletRequest;
@property(retain, nonatomic) WalletThreePointArea *walletThreepointArea; // @dynamic walletThreepointArea;
@property(retain, nonatomic) WalletTitle *walletTitle; // @dynamic walletTitle;

@end

