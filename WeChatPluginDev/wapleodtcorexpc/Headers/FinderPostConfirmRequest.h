//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderPostTraceInfo, NSString;

@interface FinderPostConfirmRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned long long postFlag; // @dynamic postFlag;
@property(nonatomic) unsigned int postScene; // @dynamic postScene;
@property(retain, nonatomic) FinderPostTraceInfo *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

