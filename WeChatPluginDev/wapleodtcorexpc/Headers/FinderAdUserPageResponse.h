//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderContact, FinderNicknameVerifyInfo, FinderPreloadInfo, FinderUserInfo, NSData, NSMutableArray, NSString, OriginalEntranceInfo;

@interface FinderAdUserPageResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderContact *contact; // @dynamic contact;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) OriginalEntranceInfo *entranceInfo; // @dynamic entranceInfo;
@property(nonatomic) unsigned int fansCount; // @dynamic fansCount;
@property(nonatomic) unsigned int feedsCount; // @dynamic feedsCount;
@property(retain, nonatomic) FinderUserInfo *finderUserInfo; // @dynamic finderUserInfo;
@property(retain, nonatomic) NSString *firstPageMd5; // @dynamic firstPageMd5;
@property(nonatomic) unsigned int friendFollowCount; // @dynamic friendFollowCount;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) NSMutableArray *liveObjects; // @dynamic liveObjects;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(nonatomic) unsigned int originalEntranceFlag; // @dynamic originalEntranceFlag;
@property(retain, nonatomic) FinderPreloadInfo *preloadInfo; // @dynamic preloadInfo;
@property(nonatomic) unsigned int privateLock; // @dynamic privateLock;
@property(retain, nonatomic) NSString *relatedStreamWording; // @dynamic relatedStreamWording;
@property(retain, nonatomic) NSMutableArray *userTags; // @dynamic userTags;
@property(retain, nonatomic) FinderNicknameVerifyInfo *verifyInfo; // @dynamic verifyInfo;

@end

