//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSyncTipsShowInfo, NSString;

@interface WSRedPointInfo : NSObject
{
    _Bool _bFFShowRedot;
    _Bool _bCheckedExpired;
    unsigned int _entranceShowRed;
    unsigned int _clientVersion;
    unsigned int _h5TemplateVersion;
    unsigned int _expireTime;
    unsigned int _redotType;
    unsigned int _redotTimeStamp;
    unsigned int _recieveTime;
    int _clear;
    unsigned int _reddotCount;
    unsigned int _priority;
    NSString *_msgid;
    NSString *_reddotText;
    NSString *_reddotIcon;
    NSString *_extInfo;
    unsigned long long _seq;
    FinderSyncTipsShowInfo *_tipsShowInfo;
}

+ (id)parseFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_tipsShowInfo;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_seq;
+ (void)PBArrayAdd_extInfo;
+ (void)PBArrayAdd_reddotCount;
+ (void)PBArrayAdd_bCheckedExpired;
+ (void)PBArrayAdd_clear;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_redotTimeStamp;
+ (void)PBArrayAdd_reddotIcon;
+ (void)PBArrayAdd_reddotText;
+ (void)PBArrayAdd_redotType;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_h5TemplateVersion;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_entranceShowRed;
+ (void)PBArrayAdd_bFFShowRedot;
+ (void)PBArrayAdd_msgid;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderSyncTipsShowInfo *tipsShowInfo; // @synthesize tipsShowInfo=_tipsShowInfo;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) unsigned int reddotCount; // @synthesize reddotCount=_reddotCount;
@property(nonatomic) _Bool bCheckedExpired; // @synthesize bCheckedExpired=_bCheckedExpired;
@property(nonatomic) int clear; // @synthesize clear=_clear;
@property(nonatomic) unsigned int recieveTime; // @synthesize recieveTime=_recieveTime;
@property(nonatomic) unsigned int redotTimeStamp; // @synthesize redotTimeStamp=_redotTimeStamp;
@property(retain, nonatomic) NSString *reddotIcon; // @synthesize reddotIcon=_reddotIcon;
@property(retain, nonatomic) NSString *reddotText; // @synthesize reddotText=_reddotText;
@property(nonatomic) unsigned int redotType; // @synthesize redotType=_redotType;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) unsigned int h5TemplateVersion; // @synthesize h5TemplateVersion=_h5TemplateVersion;
@property(nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property(nonatomic) unsigned int entranceShowRed; // @synthesize entranceShowRed=_entranceShowRed;
@property(nonatomic) _Bool bFFShowRedot; // @synthesize bFFShowRedot=_bFFShowRedot;
@property(retain, nonatomic) NSString *msgid; // @synthesize msgid=_msgid;
@property(readonly, copy) NSString *description;
- (long long)tabCategory;
- (_Bool)hasText;
- (_Bool)hasIcon;
- (_Bool)isActive;
- (unsigned long long)getVisionType;
- (_Bool)isTimeStampValid;
- (_Bool)isWeSeeThirdColumnReddotType;
- (_Bool)isWeSeeSecondColumnReddotType;
- (_Bool)isWeSeeFirstColumnReddotType;
- (_Bool)isWeSeeContentReddotType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

