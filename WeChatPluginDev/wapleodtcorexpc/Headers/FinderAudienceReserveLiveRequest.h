//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderLivePermissionVerifyInfo, NSData, NSMutableArray, NSString;

@interface FinderAudienceReserveLiveRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *anchorFinderUsername; // @dynamic anchorFinderUsername;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) NSData *liveCookies; // @dynamic liveCookies;
@property(nonatomic) unsigned int noticeAggregateType; // @dynamic noticeAggregateType;
@property(retain, nonatomic) NSMutableArray *noticeAggregateTypeList; // @dynamic noticeAggregateTypeList;
@property(retain, nonatomic) NSString *noticeId; // @dynamic noticeId;
@property(nonatomic) unsigned int optype; // @dynamic optype;
@property(retain, nonatomic) NSString *promoterToken; // @dynamic promoterToken;
@property(retain, nonatomic) NSString *qrcodeUrl; // @dynamic qrcodeUrl;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int userPageEnterType; // @dynamic userPageEnterType;
@property(retain, nonatomic) FinderLivePermissionVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

