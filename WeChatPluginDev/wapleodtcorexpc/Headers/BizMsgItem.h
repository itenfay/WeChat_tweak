//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DigestInfo, NSMutableArray, NSString;

@interface BizMsgItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bizclientmsgid; // @dynamic bizclientmsgid;
@property(retain, nonatomic) NSString *buffer; // @dynamic buffer;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(nonatomic) unsigned long long clientmsgid; // @dynamic clientmsgid;
@property(nonatomic) unsigned int digestExposure; // @dynamic digestExposure;
@property(nonatomic) unsigned int digestExposureCnt; // @dynamic digestExposureCnt;
@property(nonatomic) unsigned int digestExposurePeriod; // @dynamic digestExposurePeriod;
@property(nonatomic) unsigned int digestExposurePos; // @dynamic digestExposurePos;
@property(retain, nonatomic) DigestInfo *digestInfo; // @dynamic digestInfo;
@property(nonatomic) unsigned int exposureAreaRatio; // @dynamic exposureAreaRatio;
@property(nonatomic) unsigned int exposureCnt; // @dynamic exposureCnt;
@property(retain, nonatomic) NSString *extraData; // @dynamic extraData;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(nonatomic) unsigned int groupFlag; // @dynamic groupFlag;
@property(nonatomic) unsigned int itemShowType; // @dynamic itemShowType;
@property(nonatomic) unsigned int lowergroupFlag; // @dynamic lowergroupFlag;
@property(nonatomic) unsigned int opFlag; // @dynamic opFlag;
@property(nonatomic) unsigned int picType; // @dynamic picType;
@property(retain, nonatomic) NSMutableArray *recInfo; // @dynamic recInfo;
@property(retain, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(nonatomic) unsigned int time; // @dynamic time;
@property(retain, nonatomic) NSString *url; // @dynamic url;
@property(retain, nonatomic) NSMutableArray *urls; // @dynamic urls;
@property(nonatomic) unsigned int weight; // @dynamic weight;

@end

