//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString, NoticeItem;

@interface CheckHoneyUserResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(nonatomic) unsigned long long maxCreditLine; // @dynamic maxCreditLine;
@property(nonatomic) unsigned long long minCreditLine; // @dynamic minCreditLine;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *overMaxLimitWarning; // @dynamic overMaxLimitWarning;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *takeMessage; // @dynamic takeMessage;
@property(retain, nonatomic) NSString *truenameMask; // @dynamic truenameMask;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end

