//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, FinderBaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface FinderAudienceReserveLiveNotificationRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int innerScene; // @dynamic innerScene;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) int opType; // @dynamic opType;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

