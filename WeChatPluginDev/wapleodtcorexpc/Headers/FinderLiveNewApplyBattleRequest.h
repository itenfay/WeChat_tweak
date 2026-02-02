//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSMutableArray, NSString;

@interface FinderLiveNewApplyBattleRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int battleDuration; // @dynamic battleDuration;
@property(nonatomic) unsigned int battleLayout; // @dynamic battleLayout;
@property(nonatomic) unsigned int battleMode; // @dynamic battleMode;
@property(nonatomic) unsigned int battleScope; // @dynamic battleScope;
@property(retain, nonatomic) NSMutableArray *battleTeams; // @dynamic battleTeams;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSData *indicatorParameter; // @dynamic indicatorParameter;
@property(nonatomic) unsigned int indicatorType; // @dynamic indicatorType;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned long long liveId; // @dynamic liveId;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(retain, nonatomic) NSString *referMicSessionId; // @dynamic referMicSessionId;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *vroomId; // @dynamic vroomId;

@end

