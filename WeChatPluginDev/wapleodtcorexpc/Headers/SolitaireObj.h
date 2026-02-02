//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface SolitaireObj : NSObject
{
    _Bool _bJustSendPlainText;
    _Bool _bNeedAddOccupyWhenTapTips;
    _Bool _isActived;
    _Bool _hasHeader;
    _Bool _isCreateType;
    _Bool _canQuickShowTips;
    _Bool _bFromCallLaunch;
    unsigned int _matchCount;
    unsigned int _activeTime;
    unsigned int _createTime;
    NSString *_nsSolitaireHeader;
    NSString *_nsSolitaireTail;
    NSString *_nsExample;
    NSString *_nsSeparator;
    NSString *_nsActiveUserName;
    NSString *_nsChatName;
    NSString *_nsIdentifier;
    NSString *_nsContent;
    NSArray *_arrNewItems;
    long long _firstSvrId;
    unsigned long long _editScene;
    unsigned long long _activeScene;
    NSMutableDictionary *_dicSolitaireItem;
    NSMutableSet *_invalidSolitaireKeySet;
    NSMutableDictionary *_dicInvalidMsg;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsIdentifier;
+ (void)PBArrayAdd_activeScene;
+ (void)PBArrayAdd_dicInvalidMsg;
+ (void)PBArrayAdd_firstSvrId;
+ (void)PBArrayAdd_activeTime;
+ (void)PBArrayAdd_invalidSolitaireKeySet;
+ (void)PBArrayAdd_dicSolitaireItem;
+ (void)PBArrayAdd_matchCount;
+ (void)PBArrayAdd_canQuickShowTips;
+ (void)PBArrayAdd_isCreateType;
+ (void)PBArrayAdd_hasHeader;
+ (void)PBArrayAdd_nsChatName;
+ (void)PBArrayAdd_nsActiveUserName;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_nsExample;
+ (void)PBArrayAdd_nsSolitaireTail;
+ (void)PBArrayAdd_nsSolitaireHeader;
- (void).cxx_destruct;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSMutableDictionary *dicInvalidMsg; // @synthesize dicInvalidMsg=_dicInvalidMsg;
@property(retain, nonatomic) NSMutableSet *invalidSolitaireKeySet; // @synthesize invalidSolitaireKeySet=_invalidSolitaireKeySet;
@property(retain, nonatomic) NSMutableDictionary *dicSolitaireItem; // @synthesize dicSolitaireItem=_dicSolitaireItem;
@property(nonatomic) unsigned long long activeScene; // @synthesize activeScene=_activeScene;
@property(nonatomic) unsigned long long editScene; // @synthesize editScene=_editScene;
@property(nonatomic) long long firstSvrId; // @synthesize firstSvrId=_firstSvrId;
@property(nonatomic) unsigned int activeTime; // @synthesize activeTime=_activeTime;
@property(nonatomic) unsigned int matchCount; // @synthesize matchCount=_matchCount;
@property(nonatomic) _Bool bFromCallLaunch; // @synthesize bFromCallLaunch=_bFromCallLaunch;
@property(nonatomic) _Bool canQuickShowTips; // @synthesize canQuickShowTips=_canQuickShowTips;
@property(nonatomic) _Bool isCreateType; // @synthesize isCreateType=_isCreateType;
@property(nonatomic) _Bool hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic) _Bool isActived; // @synthesize isActived=_isActived;
@property(nonatomic) _Bool bNeedAddOccupyWhenTapTips; // @synthesize bNeedAddOccupyWhenTapTips=_bNeedAddOccupyWhenTapTips;
@property(nonatomic) _Bool bJustSendPlainText; // @synthesize bJustSendPlainText=_bJustSendPlainText;
@property(retain, nonatomic) NSArray *arrNewItems; // @synthesize arrNewItems=_arrNewItems;
@property(retain, nonatomic) NSString *nsContent; // @synthesize nsContent=_nsContent;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
@property(retain, nonatomic) NSString *nsActiveUserName; // @synthesize nsActiveUserName=_nsActiveUserName;
@property(retain, nonatomic) NSString *nsSeparator; // @synthesize nsSeparator=_nsSeparator;
@property(retain, nonatomic) NSString *nsExample; // @synthesize nsExample=_nsExample;
@property(retain, nonatomic) NSString *nsSolitaireTail; // @synthesize nsSolitaireTail=_nsSolitaireTail;
@property(retain, nonatomic) NSString *nsSolitaireHeader; // @synthesize nsSolitaireHeader=_nsSolitaireHeader;
@property(readonly, copy) NSString *description;
- (unsigned int)getCreateTime;
- (void)updateSelfInfoWithSolitaireObj:(id)arg1;
- (_Bool)updateDicSolitaireItemByArray:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)genSortItemsWithNewArr:(_Bool)arg1;
- (void)mergeNewItems;
- (id)getSolitaireXmlInfo;
- (void)fixHeaderInfo;
- (void)fixExampleInfo;
- (void)fixSolitaireInfo;
- (id)getRangeWithContent:(id)arg1;
- (id)getSolitaireResultWithNewLine:(_Bool)arg1;
- (void)addSolitaireItemsWithSolitaireInfo:(id)arg1;
- (void)invalidAllItem;
- (void)addInvalidMsgWithItem:(id)arg1;
- (id)getDiffNewAndMergeItemsWithContents:(id)arg1;
- (_Bool)editContentIFInSameNumWith:(id)arg1 Item:(id)arg2;
- (id)getSolitaireKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

