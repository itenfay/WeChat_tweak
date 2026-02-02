//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLbsLocation, NSData, NSString;

@interface FinderGetLbsListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int entryTime; // @dynamic entryTime;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int isAutoQuery; // @dynamic isAutoQuery;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLbsLocation *lbsLocation; // @dynamic lbsLocation;
@property(retain, nonatomic) FinderLbsLocation *materialLbsLocation; // @dynamic materialLbsLocation;
@property(nonatomic) unsigned int requestScene; // @dynamic requestScene;

@end

