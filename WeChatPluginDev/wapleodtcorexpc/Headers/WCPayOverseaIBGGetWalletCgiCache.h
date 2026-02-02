//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCPayOverseaGrayArea, WCPayOverseaThreePointArea, WCPayOverseaWalletNotice, WCPayOverseaWalletTitle;

@interface WCPayOverseaIBGGetWalletCgiCache : NSObject
{
    _Bool _canSwitchWallet;
    _Bool _isShowUserKeyInfo;
    unsigned int _walletRegion;
    WCPayOverseaWalletTitle *_walletTitle;
    WCPayOverseaWalletNotice *_walletNotice;
    WCPayOverseaGrayArea *_walletGrayArea;
    WCPayOverseaThreePointArea *_walletThreePointArea;
    NSString *_walletRegionDesc;
    NSMutableArray *_walletRegionDescArray;
    NSString *_userKeyInfoUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_userKeyInfoUrl;
+ (void)PBArrayAdd_isShowUserKeyInfo;
+ (void)PBArrayAdd_walletRegionDescArray;
+ (void)PBArrayAdd_walletRegionDesc;
+ (void)PBArrayAdd_canSwitchWallet;
+ (void)PBArrayAdd_walletRegion;
+ (void)PBArrayAdd_walletThreePointArea;
+ (void)PBArrayAdd_walletGrayArea;
+ (void)PBArrayAdd_walletNotice;
+ (void)PBArrayAdd_walletTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userKeyInfoUrl; // @synthesize userKeyInfoUrl=_userKeyInfoUrl;
@property(nonatomic) _Bool isShowUserKeyInfo; // @synthesize isShowUserKeyInfo=_isShowUserKeyInfo;
@property(retain, nonatomic) NSMutableArray *walletRegionDescArray; // @synthesize walletRegionDescArray=_walletRegionDescArray;
@property(retain, nonatomic) NSString *walletRegionDesc; // @synthesize walletRegionDesc=_walletRegionDesc;
@property(nonatomic) _Bool canSwitchWallet; // @synthesize canSwitchWallet=_canSwitchWallet;
@property(nonatomic) unsigned int walletRegion; // @synthesize walletRegion=_walletRegion;
@property(retain, nonatomic) WCPayOverseaThreePointArea *walletThreePointArea; // @synthesize walletThreePointArea=_walletThreePointArea;
@property(retain, nonatomic) WCPayOverseaGrayArea *walletGrayArea; // @synthesize walletGrayArea=_walletGrayArea;
@property(retain, nonatomic) WCPayOverseaWalletNotice *walletNotice; // @synthesize walletNotice=_walletNotice;
@property(retain, nonatomic) WCPayOverseaWalletTitle *walletTitle; // @synthesize walletTitle=_walletTitle;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

