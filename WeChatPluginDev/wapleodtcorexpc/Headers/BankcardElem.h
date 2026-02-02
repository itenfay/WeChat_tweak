//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface BankcardElem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bankCardFee; // @dynamic bankCardFee;
@property(nonatomic) unsigned int bankFlag; // @dynamic bankFlag;
@property(retain, nonatomic) NSString *bankLogo; // @dynamic bankLogo;
@property(retain, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) NSMutableArray *enterTimeList; // @dynamic enterTimeList;
@property(retain, nonatomic) NSString *feeRateExplain; // @dynamic feeRateExplain;
@property(retain, nonatomic) NSString *maintenanceAlertText; // @dynamic maintenanceAlertText;
@property(retain, nonatomic) NSString *maintenanceColor; // @dynamic maintenanceColor;
@property(retain, nonatomic) NSString *maintenanceText; // @dynamic maintenanceText;
@property(nonatomic) unsigned long long minPoundage; // @dynamic minPoundage;
@property(retain, nonatomic) NSString *sortPingyin; // @dynamic sortPingyin;

@end

