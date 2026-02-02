//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPreCreateEventRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *eventCoverImgUrl; // @dynamic eventCoverImgUrl;
@property(retain, nonatomic) NSString *eventDescription; // @dynamic eventDescription;
@property(nonatomic) unsigned long long eventEndTime; // @dynamic eventEndTime;
@property(retain, nonatomic) NSString *eventName; // @dynamic eventName;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

