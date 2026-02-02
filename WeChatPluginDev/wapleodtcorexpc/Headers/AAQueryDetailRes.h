//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AAAlertItem, BaseResponse, NSMutableArray, NSString, NoticeItem;

@interface AAQueryDetailRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long activityAmount; // @dynamic activityAmount;
@property(retain, nonatomic) AAAlertItem *alertItem; // @dynamic alertItem;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *billNo; // @dynamic billNo;
@property(retain, nonatomic) NSString *changeWording; // @dynamic changeWording;
@property(nonatomic) unsigned int isLauncher; // @dynamic isLauncher;
@property(nonatomic) unsigned int jumpChange; // @dynamic jumpChange;
@property(retain, nonatomic) NSString *launcherRealName; // @dynamic launcherRealName;
@property(retain, nonatomic) NSString *launcherUsername; // @dynamic launcherUsername;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(nonatomic) unsigned int overtimeDays; // @dynamic overtimeDays;
@property(nonatomic) unsigned long long paidAmount; // @dynamic paidAmount;
@property(nonatomic) unsigned int paidNum; // @dynamic paidNum;
@property(retain, nonatomic) NSMutableArray *payerList; // @dynamic payerList;
@property(retain, nonatomic) NSString *picCdnThumbUrl; // @dynamic picCdnThumbUrl;
@property(retain, nonatomic) NSString *picCdnUrl; // @dynamic picCdnUrl;
@property(nonatomic) unsigned long long planAmount; // @dynamic planAmount;
@property(nonatomic) unsigned int planNum; // @dynamic planNum;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(nonatomic) unsigned int role; // @dynamic role;
@property(nonatomic) unsigned long long roleFinishAmount; // @dynamic roleFinishAmount;
@property(nonatomic) unsigned int rolePairCnt; // @dynamic rolePairCnt;
@property(nonatomic) unsigned long long roleRefundAmount; // @dynamic roleRefundAmount;
@property(nonatomic) unsigned int roleState; // @dynamic roleState;
@property(nonatomic) unsigned long long roleTotalAmount; // @dynamic roleTotalAmount;
@property(nonatomic) unsigned int state; // @dynamic state;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *uprightCornerList; // @dynamic uprightCornerList;

@end

