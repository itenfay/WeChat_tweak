//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSMutableArray, NSString;

@interface FinderLiveSwitchGiftSkinReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *componentKeyList; // @dynamic componentKeyList;
@property(retain, nonatomic) NSString *customText; // @dynamic customText;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int giftType; // @dynamic giftType;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) _Bool needSwitchSkin; // @dynamic needSwitchSkin;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *skinId; // @dynamic skinId;
@property(nonatomic) unsigned int textOpType; // @dynamic textOpType;

@end

