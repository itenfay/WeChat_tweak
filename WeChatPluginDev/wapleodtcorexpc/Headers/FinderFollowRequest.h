//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderFollowNewLifeReportInfo, FinderLiveReportBaseInfo, NSData, NSString;

@interface FinderFollowRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enhanceFollowBtn; // @dynamic enhanceFollowBtn;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int followScene; // @dynamic followScene;
@property(nonatomic) unsigned long long fromMentionId; // @dynamic fromMentionId;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(retain, nonatomic) FinderFollowNewLifeReportInfo *newlifeReportInfo; // @dynamic newlifeReportInfo;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *posterUsername; // @dynamic posterUsername;
@property(retain, nonatomic) NSData *refLiveCookies; // @dynamic refLiveCookies;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSData *uxInfo; // @dynamic uxInfo;

@end

