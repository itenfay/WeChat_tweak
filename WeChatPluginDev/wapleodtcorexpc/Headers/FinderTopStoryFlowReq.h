//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderUnreadItemList, NSData;

@interface FinderTopStoryFlowReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderUnreadItemList *clientPrefetchData; // @dynamic clientPrefetchData;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(nonatomic) unsigned long long requestId; // @dynamic requestId;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;
@property(nonatomic) unsigned long long tabTipsObjectId; // @dynamic tabTipsObjectId;
@property(nonatomic) unsigned int tabType; // @dynamic tabType;

@end

