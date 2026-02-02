//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EXTPKG_mmpayapplynfccardbo_CardRecordsInfo, NSMutableArray, NSString;

@interface EXTPKG_mmpayapplynfccardbo_CardTypeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *cardAboutContent; // @dynamic cardAboutContent;
@property(nonatomic) int cardAboutContentFlag; // @dynamic cardAboutContentFlag;
@property(nonatomic) long long cardApplyAmount; // @dynamic cardApplyAmount;
@property(retain, nonatomic) NSString *cardApplyAmountName; // @dynamic cardApplyAmountName;
@property(retain, nonatomic) NSString *cardCityId; // @dynamic cardCityId;
@property(retain, nonatomic) NSMutableArray *cardDepositAmount; // @dynamic cardDepositAmount;
@property(retain, nonatomic) NSString *cardLegalInfo; // @dynamic cardLegalInfo;
@property(retain, nonatomic) NSString *cardMainLogo; // @dynamic cardMainLogo;
@property(nonatomic) long long cardMaxBalance; // @dynamic cardMaxBalance;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_CardRecordsInfo *cardRecordInfo; // @dynamic cardRecordInfo;
@property(retain, nonatomic) NSMutableArray *cardTag; // @dynamic cardTag;
@property(retain, nonatomic) NSString *cardTitle; // @dynamic cardTitle;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *dpanPrefix; // @dynamic dpanPrefix;
@property(retain, nonatomic) NSString *fpanPrefix; // @dynamic fpanPrefix;
@property(retain, nonatomic) NSString *iosVersion; // @dynamic iosVersion;
@property(retain, nonatomic) NSString *orderRecordsInfo; // @dynamic orderRecordsInfo;
@property(retain, nonatomic) NSString *preDepositOrderDesc; // @dynamic preDepositOrderDesc;
@property(retain, nonatomic) NSString *watchOsVersion; // @dynamic watchOsVersion;

@end

