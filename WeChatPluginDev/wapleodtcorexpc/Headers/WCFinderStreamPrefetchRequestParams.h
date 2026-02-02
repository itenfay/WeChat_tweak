//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSubTabItem, FinderSyncTipsShowInfo, NSArray, NSData, NSString;

@interface WCFinderStreamPrefetchRequestParams : NSObject
{
    _Bool _byRedDot;
    _Bool _ignoreIntevalConf;
    _Bool _hotTabNeedTopRefresh;
    int _tabType;
    int _refreshStatus;
    NSData *_streamBuffer;
    unsigned long long _objectID;
    NSString *_nonceID;
    NSData *_tabTipsByPassInfo;
    NSString *_tabTipsPath;
    NSString *_userName;
    FinderSyncTipsShowInfo *_bubbleInfo;
    NSArray *_otherTabUnreadCacheFeeds;
    FinderSubTabItem *_subTabItem;
}

+ (id)prefetchParamsFromStreamParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderSubTabItem *subTabItem; // @synthesize subTabItem=_subTabItem;
@property(retain, nonatomic) NSArray *otherTabUnreadCacheFeeds; // @synthesize otherTabUnreadCacheFeeds=_otherTabUnreadCacheFeeds;
@property(nonatomic) int refreshStatus; // @synthesize refreshStatus=_refreshStatus;
@property(retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *tabTipsPath; // @synthesize tabTipsPath=_tabTipsPath;
@property(retain, nonatomic) NSData *tabTipsByPassInfo; // @synthesize tabTipsByPassInfo=_tabTipsByPassInfo;
@property(nonatomic) _Bool hotTabNeedTopRefresh; // @synthesize hotTabNeedTopRefresh=_hotTabNeedTopRefresh;
@property(nonatomic) _Bool ignoreIntevalConf; // @synthesize ignoreIntevalConf=_ignoreIntevalConf;
@property(nonatomic) _Bool byRedDot; // @synthesize byRedDot=_byRedDot;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(nonatomic) unsigned long long objectID; // @synthesize objectID=_objectID;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSData *streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (id)init;

@end

