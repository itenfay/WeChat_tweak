//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTOftenReadContactData
{
    _Bool _hasNewMsg;
    _Bool _hasNewLive;
    unsigned int _lastMsgTime;
    unsigned int _weight;
    unsigned int _flag;
    NSString *_userName;
    unsigned long long _lastMsgSvrId;
    NSString *_finderFeedExportId;
    unsigned long long _newMsgType;
    unsigned long long _lastFinderGreenDotTimeStamp;
    NSString *_finderNickName;
    NSString *_finderLogoUrl;
    unsigned long long _finderUin;
    unsigned long long _finderLastUpdateTime;
    NSString *_finderExportId;
}

+ (void)initialize;
+ (void)PBArrayAdd_finderExportId;
+ (void)PBArrayAdd_finderLastUpdateTime;
+ (void)PBArrayAdd_finderUin;
+ (void)PBArrayAdd_finderLogoUrl;
+ (void)PBArrayAdd_finderNickName;
+ (void)PBArrayAdd_flag;
+ (void)PBArrayAdd_lastFinderGreenDotTimeStamp;
+ (void)PBArrayAdd_newMsgType;
+ (void)PBArrayAdd_hasNewLive;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_weight;
+ (void)PBArrayAdd_lastMsgTime;
+ (void)PBArrayAdd_hasNewMsg;
+ (void)PBArrayAdd_userName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finderExportId; // @synthesize finderExportId=_finderExportId;
@property(nonatomic) unsigned long long finderLastUpdateTime; // @synthesize finderLastUpdateTime=_finderLastUpdateTime;
@property(nonatomic) unsigned long long finderUin; // @synthesize finderUin=_finderUin;
@property(retain, nonatomic) NSString *finderLogoUrl; // @synthesize finderLogoUrl=_finderLogoUrl;
@property(retain, nonatomic) NSString *finderNickName; // @synthesize finderNickName=_finderNickName;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long long lastFinderGreenDotTimeStamp; // @synthesize lastFinderGreenDotTimeStamp=_lastFinderGreenDotTimeStamp;
@property(nonatomic) unsigned long long newMsgType; // @synthesize newMsgType=_newMsgType;
@property(nonatomic) _Bool hasNewLive; // @synthesize hasNewLive=_hasNewLive;
@property(copy, nonatomic) NSString *finderFeedExportId; // @synthesize finderFeedExportId=_finderFeedExportId;
@property(nonatomic) unsigned int weight; // @synthesize weight=_weight;
@property(nonatomic) unsigned int lastMsgTime; // @synthesize lastMsgTime=_lastMsgTime;
@property(nonatomic) unsigned long long lastMsgSvrId; // @synthesize lastMsgSvrId=_lastMsgSvrId;
@property(nonatomic) _Bool hasNewMsg; // @synthesize hasNewMsg=_hasNewMsg;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)getNeededExportId;
@property(readonly, copy) NSString *description;
- (_Bool)isMember;
- (_Bool)isFinder;
- (_Bool)isLiving;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

