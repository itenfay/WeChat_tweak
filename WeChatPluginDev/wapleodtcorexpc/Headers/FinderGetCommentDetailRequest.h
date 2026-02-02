//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderClientStatus, FinderLivePermissionVerifyInfo, FinderLiveReportBaseInfo, NSData, NSString, StreamTabTipsInfo;

@interface FinderGetCommentDetailRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int direction; // @dynamic direction;
@property(retain, nonatomic) NSString *encryptedObjectid; // @dynamic encryptedObjectid;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int identityScene; // @dynamic identityScene;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(retain, nonatomic) NSData *likeBuffer; // @dynamic likeBuffer;
@property(retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo; // @dynamic liveReportBaseInfo;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) unsigned long long maxCommentId; // @dynamic maxCommentId;
@property(nonatomic) unsigned int needObject; // @dynamic needObject;
@property(nonatomic) unsigned int needSelection; // @dynamic needSelection;
@property(nonatomic) _Bool needUnencryptedLink; // @dynamic needUnencryptedLink;
@property(retain, nonatomic) NSString *objectNonceId; // @dynamic objectNonceId;
@property(nonatomic) unsigned long long objectid; // @dynamic objectid;
@property(nonatomic) unsigned int platformScene; // @dynamic platformScene;
@property(nonatomic) unsigned int pullScene; // @dynamic pullScene;
@property(nonatomic) unsigned long long refCommentId; // @dynamic refCommentId;
@property(nonatomic) unsigned long long rootCommentId; // @dynamic rootCommentId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int shareTime; // @dynamic shareTime;
@property(retain, nonatomic) NSString *shortUrl; // @dynamic shortUrl;
@property(retain, nonatomic) FinderClientStatus *status; // @dynamic status;
@property(retain, nonatomic) StreamTabTipsInfo *tabTipsInfo; // @dynamic tabTipsInfo;
@property(retain, nonatomic) NSString *tipsId; // @dynamic tipsId;
@property(retain, nonatomic) NSData *traceBuffer; // @dynamic traceBuffer;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

