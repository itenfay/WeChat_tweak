//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ComplianceItem, JumpItem, NSMutableArray, NSString, NoticeItem;

@interface TransferPhoneHomePageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpItem *announcement; // @dynamic announcement;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ComplianceItem *complianceItem; // @dynamic complianceItem;
@property(nonatomic) unsigned int hasHisRcvr; // @dynamic hasHisRcvr;
@property(retain, nonatomic) NSString *homepageExt; // @dynamic homepageExt;
@property(nonatomic) _Bool isNewUser; // @dynamic isNewUser;
@property(retain, nonatomic) NSMutableArray *menu; // @dynamic menu;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

