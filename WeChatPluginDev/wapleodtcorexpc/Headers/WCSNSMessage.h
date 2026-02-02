//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCSNSRewardInfo, WCUserComment;

@interface WCSNSMessage : NSObject
{
    NSString *msgID;
    NSString *objID;
    NSString *parentObjID;
    WCUserComment *comment;
    WCUserComment *refComment;
    _Bool hasRead;
    unsigned int delStatus;
    WCSNSRewardInfo *rewardInfo;
    NSString *_clientId;
}

+ (id)fromSnsActionGroup:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) WCSNSRewardInfo *rewardInfo; // @synthesize rewardInfo;
@property(nonatomic) unsigned int delStatus; // @synthesize delStatus;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(retain, nonatomic) WCUserComment *comment; // @synthesize comment;
@property(retain, nonatomic) NSString *parentObjID; // @synthesize parentObjID;
@property(retain, nonatomic) NSString *objID; // @synthesize objID;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
- (long long)msgTypeFromClientId;
- (void)upgradeDataIfNeeded;
- (_Bool)isWCDataItemDeleted;
- (_Bool)isWCMessageDeleted;
- (id)description;
- (id)init;

@end

