//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCollectionListInfo, FinderLiteAppParam, NSArray, NSData, NSMutableArray, NSString, WCFinderProfileAudioSectionCache, WCFinderProfileMemberShipCache, WCFinderProfileOverviewMusicCache;

@interface WCFinderProfileOverviewCacheItem : NSObject
{
    NSArray *_layouts;
    NSMutableArray *_showAllButtonSections;
    NSArray *_feedTids;
    unsigned long long _collectionCount;
    FinderCollectionListInfo *_collectionInfo;
    unsigned long long _liveFeedCount;
    NSArray *_liveFeedTids;
    unsigned long long _templateCnt;
    NSArray *_templateInfos;
    WCFinderProfileOverviewMusicCache *_musicCache;
    WCFinderProfileAudioSectionCache *_audioCache;
    unsigned long long _newlifeCnt;
    NSArray *_newlifeFeedIds;
    WCFinderProfileMemberShipCache *_memberShip;
    unsigned long long _qaCount;
    FinderLiteAppParam *_qaLiteApp;
    unsigned long long _paidCollectionCount;
    NSArray *_paidCollectionList;
    NSData *_data;
    id _parsedObj;
}

+ (void)initialize;
+ (void)PBArrayAdd_paidCollectionList;
+ (void)PBArrayAdd_paidCollectionCount;
+ (void)PBArrayAdd_showAllButtonSections;
+ (void)PBArrayAdd_qaCount;
+ (void)PBArrayAdd_memberShip;
+ (void)PBArrayAdd_newlifeFeedIds;
+ (void)PBArrayAdd_newlifeCnt;
+ (void)PBArrayAdd_audioCache;
+ (void)PBArrayAdd_musicCache;
+ (void)PBArrayAdd_templateInfos;
+ (void)PBArrayAdd_templateCnt;
+ (void)PBArrayAdd_liveFeedTids;
+ (void)PBArrayAdd_liveFeedCount;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_feedTids;
+ (void)PBArrayAdd_layouts;
- (void).cxx_destruct;
@property(retain, nonatomic) id parsedObj; // @synthesize parsedObj=_parsedObj;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSArray *paidCollectionList; // @synthesize paidCollectionList=_paidCollectionList;
@property(nonatomic) unsigned long long paidCollectionCount; // @synthesize paidCollectionCount=_paidCollectionCount;
@property(retain, nonatomic) FinderLiteAppParam *qaLiteApp; // @synthesize qaLiteApp=_qaLiteApp;
@property(nonatomic) unsigned long long qaCount; // @synthesize qaCount=_qaCount;
@property(retain, nonatomic) WCFinderProfileMemberShipCache *memberShip; // @synthesize memberShip=_memberShip;
@property(retain, nonatomic) NSArray *newlifeFeedIds; // @synthesize newlifeFeedIds=_newlifeFeedIds;
@property(nonatomic) unsigned long long newlifeCnt; // @synthesize newlifeCnt=_newlifeCnt;
@property(retain, nonatomic) WCFinderProfileAudioSectionCache *audioCache; // @synthesize audioCache=_audioCache;
@property(retain, nonatomic) WCFinderProfileOverviewMusicCache *musicCache; // @synthesize musicCache=_musicCache;
@property(retain, nonatomic) NSArray *templateInfos; // @synthesize templateInfos=_templateInfos;
@property(nonatomic) unsigned long long templateCnt; // @synthesize templateCnt=_templateCnt;
@property(retain, nonatomic) NSArray *liveFeedTids; // @synthesize liveFeedTids=_liveFeedTids;
@property(nonatomic) unsigned long long liveFeedCount; // @synthesize liveFeedCount=_liveFeedCount;
@property(retain, nonatomic) FinderCollectionListInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(nonatomic) unsigned long long collectionCount; // @synthesize collectionCount=_collectionCount;
@property(retain, nonatomic) NSArray *feedTids; // @synthesize feedTids=_feedTids;
@property(retain, nonatomic) NSMutableArray *showAllButtonSections; // @synthesize showAllButtonSections=_showAllButtonSections;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

