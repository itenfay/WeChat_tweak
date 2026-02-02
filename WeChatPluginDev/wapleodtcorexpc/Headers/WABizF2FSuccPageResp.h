//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, ExposureInfo, NSMutableArray, NSString;

@interface WABizF2FSuccPageResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) ExposureInfo *exposureInfo; // @dynamic exposureInfo;
@property(retain, nonatomic) NSMutableArray *favorDescList; // @dynamic favorDescList;
@property(retain, nonatomic) NSString *noticeColor; // @dynamic noticeColor;
@property(retain, nonatomic) NSString *noticeUrl; // @dynamic noticeUrl;
@property(retain, nonatomic) NSString *noticeWording; // @dynamic noticeWording;
@property(nonatomic) unsigned long long receivedAmount; // @dynamic receivedAmount;
@property(nonatomic) unsigned int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(nonatomic) unsigned int showFavorFlag; // @dynamic showFavorFlag;
@property(nonatomic) unsigned int showReceivedAmountFlag; // @dynamic showReceivedAmountFlag;
@property(retain, nonatomic) NSString *totalFavorDesc; // @dynamic totalFavorDesc;

@end

