//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, PlanIndexResp_MngPlanItem, PlanIndexResp_MoreRecords, PlanIndexResp_TransTipsItem;

@interface PlanIndexResp_PlanItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *bankLogo; // @dynamic bankLogo;
@property(retain, nonatomic) NSString *bankName; // @dynamic bankName;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) NSString *bindSerialNo; // @dynamic bindSerialNo;
@property(retain, nonatomic) NSString *cardCategoryName; // @dynamic cardCategoryName;
@property(retain, nonatomic) NSString *cardTail; // @dynamic cardTail;
@property(nonatomic) unsigned int day; // @dynamic day;
@property(retain, nonatomic) PlanIndexResp_MngPlanItem *mngPlan; // @dynamic mngPlan;
@property(retain, nonatomic) PlanIndexResp_MoreRecords *records; // @dynamic records;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *transDst; // @dynamic transDst;
@property(retain, nonatomic) PlanIndexResp_TransTipsItem *transTips; // @dynamic transTips;
@property(nonatomic) unsigned int usrPlanId; // @dynamic usrPlanId;

@end

