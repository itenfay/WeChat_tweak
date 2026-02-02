//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSString;

@interface FinderGetLiveOnlineMemberReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *boardKey; // @dynamic boardKey;
@property(nonatomic) unsigned int boardType; // @dynamic boardType;
@property(nonatomic) unsigned int businessFilterScene; // @dynamic businessFilterScene;
@property(nonatomic) _Bool clearRecentRewardHistory; // @dynamic clearRecentRewardHistory;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *getLiveOnlineMemberBuf; // @dynamic getLiveOnlineMemberBuf;
@property(retain, nonatomic) NSData *liveContactsLastBuffer; // @dynamic liveContactsLastBuffer;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(retain, nonatomic) NSString *micId; // @dynamic micId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

