//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderLiveGetShopShelfRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *ecSource; // @dynamic ecSource;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSData *productExtInfo; // @dynamic productExtInfo;
@property(nonatomic) unsigned int productType; // @dynamic productType;
@property(nonatomic) unsigned int pullScene; // @dynamic pullScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *shopRequestId; // @dynamic shopRequestId;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;
@property(retain, nonatomic) NSString *stockId; // @dynamic stockId;
@property(retain, nonatomic) NSData *uxInfo; // @dynamic uxInfo;
@property(nonatomic) unsigned long long version; // @dynamic version;

@end

