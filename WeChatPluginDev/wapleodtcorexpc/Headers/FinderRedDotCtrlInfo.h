//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class ClearPrevReddotFeedStrategy, NSData, NSMutableArray, NSString;

@interface FinderRedDotCtrlInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int businessType; // @dynamic businessType;
@property(retain, nonatomic) ClearPrevReddotFeedStrategy *clearPrevReddotFeedStrategy; // @dynamic clearPrevReddotFeedStrategy;
@property(nonatomic) unsigned int expireTime; // @dynamic expireTime;
@property(retain, nonatomic) NSData *extInfo; // @dynamic extInfo;
@property(nonatomic) unsigned int finderSubRecallType; // @dynamic finderSubRecallType;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) unsigned int ignoreDisplayTabType; // @dynamic ignoreDisplayTabType;
@property(nonatomic) _Bool ignoreValid; // @dynamic ignoreValid;
@property(retain, nonatomic) NSString *internalFeedbackUrl; // @dynamic internalFeedbackUrl;
@property(nonatomic) unsigned int liveSubRecallType; // @dynamic liveSubRecallType;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(retain, nonatomic) NSData *reddotExposeBuff; // @dynamic reddotExposeBuff;
@property(retain, nonatomic) NSData *reportCtrlInfo; // @dynamic reportCtrlInfo;
@property(retain, nonatomic) NSString *reportExtInfo; // @dynamic reportExtInfo;
@property(nonatomic) unsigned int saveStrategy; // @dynamic saveStrategy;
@property(retain, nonatomic) NSString *selfFinderUsername; // @dynamic selfFinderUsername;
@property(retain, nonatomic) NSData *sessionBypassInfo; // @dynamic sessionBypassInfo;
@property(retain, nonatomic) NSMutableArray *showInfos; // @dynamic showInfos;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *tipsId; // @dynamic tipsId;
@property(retain, nonatomic) NSString *tipsUuid; // @dynamic tipsUuid;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

