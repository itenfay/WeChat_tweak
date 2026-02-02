//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderLbsLifeStreamLocation, NSData, NSMutableArray;

@interface FinderLbsLifeStreamRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderLbsLifeStreamLocation *accurateLocation; // @dynamic accurateLocation;
@property(nonatomic) unsigned int actionFlag; // @dynamic actionFlag;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *labelFilterList; // @dynamic labelFilterList;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLbsLifeStreamLocation *location; // @dynamic location;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @dynamic tabTipsByPassInfo;

@end

