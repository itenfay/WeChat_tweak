//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest;

@interface FinderLiveEntranceVerifyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int entranceStatus; // @dynamic entranceStatus;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;

@end

