//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderLiveClientStatus, NSData, NSString, PlayTogetherRandomLiveContext;

@interface FinderLivePlayTogetherGetRandomLiveRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) FinderLiveClientStatus *liveStatus; // @dynamic liveStatus;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned int pullType; // @dynamic pullType;
@property(retain, nonatomic) PlayTogetherRandomLiveContext *randomLiveContext; // @dynamic randomLiveContext;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) NSString *themeId; // @dynamic themeId;

@end

