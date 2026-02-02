//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLiveNoticeInfo, FinderLivePaymentSetting, NSMutableArray, NSString;

@interface FinderCreateLiveNoticeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *attachInfo; // @dynamic attachInfo;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *delReason; // @dynamic delReason;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo; // @dynamic liveNoticeInfo;
@property(nonatomic) unsigned long long modifyFieldFlag; // @dynamic modifyFieldFlag;
@property(retain, nonatomic) NSString *modifyReason; // @dynamic modifyReason;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) FinderLivePaymentSetting *paymentSetting; // @dynamic paymentSetting;
@property(nonatomic) unsigned int sourceScene; // @dynamic sourceScene;

@end

