//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MegaVideoDesc, MegaVideoFinderBusiness, NSString;

@interface MegaVideo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int bulletCount; // @dynamic bulletCount;
@property(nonatomic) unsigned int commentCount; // @dynamic commentCount;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) NSString *debugMessage; // @dynamic debugMessage;
@property(retain, nonatomic) MegaVideoDesc *desc; // @dynamic desc;
@property(nonatomic) unsigned int favCount; // @dynamic favCount;
@property(nonatomic) unsigned int favFlag; // @dynamic favFlag;
@property(retain, nonatomic) MegaVideoFinderBusiness *finder; // @dynamic finder;
@property(nonatomic) unsigned int forwardCount; // @dynamic forwardCount;
@property(nonatomic) unsigned int friendLikeCount; // @dynamic friendLikeCount;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(nonatomic) _Bool isTest; // @dynamic isTest;
@property(nonatomic) unsigned int likeCount; // @dynamic likeCount;
@property(nonatomic) unsigned int likeFlag; // @dynamic likeFlag;
@property(nonatomic) unsigned int permissionFlag; // @dynamic permissionFlag;
@property(nonatomic) unsigned int privateFlag; // @dynamic privateFlag;
@property(nonatomic) unsigned int readCount; // @dynamic readCount;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(nonatomic) unsigned int spamFlag; // @dynamic spamFlag;
@property(retain, nonatomic) NSString *spamWording; // @dynamic spamWording;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(nonatomic) unsigned int urlValidDuration; // @dynamic urlValidDuration;
@property(retain, nonatomic) NSString *videoNonceId; // @dynamic videoNonceId;
@property(nonatomic) unsigned int warnFlag; // @dynamic warnFlag;
@property(retain, nonatomic) NSString *warnWording; // @dynamic warnWording;

@end

