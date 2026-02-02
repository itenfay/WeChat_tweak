//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPoiGroupBuyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int groupBuyTab; // @dynamic groupBuyTab;
@property(retain, nonatomic) NSString *jumpInfoToGroupbuyByPass; // @dynamic jumpInfoToGroupbuyByPass;
@property(retain, nonatomic) NSString *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;

@end

