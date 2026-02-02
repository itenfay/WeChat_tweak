//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface BusiF2FGetFavorReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int amount; // @dynamic amount;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int channel; // @dynamic channel;
@property(retain, nonatomic) NSMutableArray *extraBuyDetailInfos; // @dynamic extraBuyDetailInfos;
@property(nonatomic) unsigned int failClickCell; // @dynamic failClickCell;
@property(retain, nonatomic) NSString *favorReqExtend; // @dynamic favorReqExtend;
@property(retain, nonatomic) NSString *favorReqSign; // @dynamic favorReqSign;
@property(retain, nonatomic) NSString *mchName; // @dynamic mchName;
@property(nonatomic) unsigned int originAmount; // @dynamic originAmount;
@property(retain, nonatomic) NSString *receiverDesc; // @dynamic receiverDesc;
@property(retain, nonatomic) NSString *receiverOpenid; // @dynamic receiverOpenid;
@property(retain, nonatomic) NSString *receiverUsername; // @dynamic receiverUsername;
@property(nonatomic) unsigned int scanScene; // @dynamic scanScene;

@end

