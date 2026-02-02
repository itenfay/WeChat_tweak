//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSyncTipsShowInfo, NSData, NSMutableArray, NSString;

@interface WCFinderTipsShowEntranceExtInfo : NSObject
{
    unsigned int _displayTabType;
    int _refreshStatus;
    int _feedObjectType;
    NSString *_tipsUuid;
    unsigned long long _objectId;
    NSString *_objectNonceId;
    NSString *_userName;
    NSMutableArray *_multiUsernames;
    NSData *_tabTipsByPassInfo;
    FinderSyncTipsShowInfo *_bubbleInfo;
    long long _snsFriendLikeCount;
    NSString *_reportExtInfo;
}

+ (id)extInfoWith:(id)arg1 tipsUuid:(id)arg2;
+ (void)initialize;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_snsFriendLikeCount;
+ (void)PBArrayAdd_feedObjectType;
+ (void)PBArrayAdd_refreshStatus;
+ (void)PBArrayAdd_bubbleInfo;
+ (void)PBArrayAdd_tabTipsByPassInfo;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_multiUsernames;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_displayTabType;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportExtInfo; // @synthesize reportExtInfo=_reportExtInfo;
@property(nonatomic) long long snsFriendLikeCount; // @synthesize snsFriendLikeCount=_snsFriendLikeCount;
@property(nonatomic) int feedObjectType; // @synthesize feedObjectType=_feedObjectType;
@property(nonatomic) int refreshStatus; // @synthesize refreshStatus=_refreshStatus;
@property(retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @synthesize tabTipsByPassInfo=_tabTipsByPassInfo;
@property(copy, nonatomic) NSMutableArray *multiUsernames; // @synthesize multiUsernames=_multiUsernames;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int displayTabType; // @synthesize displayTabType=_displayTabType;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *tipsUuid; // @synthesize tipsUuid=_tipsUuid;
- (_Bool)isSameTipsUuid:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)arg1;
- (id)checkToReturnExtReportDictionaryByCtrlExtInfo:(id)arg1;
- (_Bool)isVaildExtInfo;
- (id)getPBPropertyTable;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

