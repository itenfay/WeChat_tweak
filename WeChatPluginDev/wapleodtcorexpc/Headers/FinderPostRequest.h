//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderAttachmentList, FinderBaseRequest, FinderObjectDesc, FinderPostNewLifeInfo, FinderPostOriginInfo, FinderPostTraceInfo, FinderVideoDesc, NSData, NSMutableArray, NSString;

@interface FinderPostRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long assistantDraftObjectId; // @dynamic assistantDraftObjectId;
@property(retain, nonatomic) FinderAttachmentList *attachmentList; // @dynamic attachmentList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientid; // @dynamic clientid;
@property(nonatomic) unsigned long long clubId; // @dynamic clubId;
@property(retain, nonatomic) NSData *eupdOob; // @dynamic eupdOob;
@property(nonatomic) unsigned long long eventTopicId; // @dynamic eventTopicId;
@property(nonatomic) float feedLatitude; // @dynamic feedLatitude;
@property(nonatomic) float feedLongitude; // @dynamic feedLongitude;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *groupBgmUrl; // @dynamic groupBgmUrl;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) unsigned int groupPostType; // @dynamic groupPostType;
@property(nonatomic) unsigned int handleFlag; // @dynamic handleFlag;
@property(retain, nonatomic) NSString *highlightTopic; // @dynamic highlightTopic;
@property(nonatomic) unsigned int isCreatedInFinder; // @dynamic isCreatedInFinder;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) unsigned long long likeid; // @dynamic likeid;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSMutableArray *musicDocId; // @dynamic musicDocId;
@property(retain, nonatomic) FinderPostNewLifeInfo *newlifeInfo; // @dynamic newlifeInfo;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(retain, nonatomic) FinderPostOriginInfo *originInfo; // @dynamic originInfo;
@property(nonatomic) unsigned int originalFlag; // @dynamic originalFlag;
@property(nonatomic) unsigned long long postFlag; // @dynamic postFlag;
@property(nonatomic) unsigned int postScene; // @dynamic postScene;
@property(retain, nonatomic) NSString *refObjectNonceId; // @dynamic refObjectNonceId;
@property(nonatomic) unsigned long long refObjectid; // @dynamic refObjectid;
@property(retain, nonatomic) NSData *sdkMediaFeature; // @dynamic sdkMediaFeature;
@property(retain, nonatomic) NSString *tagSecKey; // @dynamic tagSecKey;
@property(nonatomic) unsigned int tagType; // @dynamic tagType;
@property(retain, nonatomic) NSMutableArray *topics; // @dynamic topics;
@property(retain, nonatomic) FinderPostTraceInfo *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;
@property(retain, nonatomic) FinderVideoDesc *videoDescNoneed; // @dynamic videoDescNoneed;
@property(nonatomic) unsigned int waitType; // @dynamic waitType;

@end

