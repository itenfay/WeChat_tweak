//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderLikeNewLifeReportInfo, NSData, NSMutableArray, NSString;

@interface FinderLikeRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *bypassBuffer; // @dynamic bypassBuffer;
@property(nonatomic) unsigned int bypassBufferType; // @dynamic bypassBufferType;
@property(nonatomic) unsigned long long commentid; // @dynamic commentid;
@property(nonatomic) unsigned int curLikeCount; // @dynamic curLikeCount;
@property(retain, nonatomic) NSString *exportId; // @dynamic exportId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int isPrivate; // @dynamic isPrivate;
@property(retain, nonatomic) NSString *likeUsername; // @dynamic likeUsername;
@property(nonatomic) unsigned long long likeid; // @dynamic likeid;
@property(retain, nonatomic) FinderLikeNewLifeReportInfo *newlifeReportInfo; // @dynamic newlifeReportInfo;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(nonatomic) unsigned int platformScene; // @dynamic platformScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSMutableArray *visibilityLabelIdList; // @dynamic visibilityLabelIdList;
@property(nonatomic) unsigned int visibilityMode; // @dynamic visibilityMode;

@end

