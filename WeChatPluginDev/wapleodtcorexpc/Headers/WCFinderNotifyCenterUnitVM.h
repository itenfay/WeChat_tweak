//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MentionListLastReadInfo, NSData, NSMutableArray, NSMutableSet, ThankRedPackageInfo, WCFinderContact, WCFinderListLoadingStateModel;
@protocol WCFinderNotifyCenterUnitVMDelegate;

@interface WCFinderNotifyCenterUnitVM : NSObject
{
    _Bool _ignoredMentionsExpanded;
    _Bool _shouldShowIgnoreTips;
    id <WCFinderNotifyCenterUnitVMDelegate> _delegate;
    unsigned long long _tabType;
    WCFinderContact *_currentContact;
    WCFinderListLoadingStateModel *_loadingState;
    ThankRedPackageInfo *_redPackageBannerInfo;
    NSMutableArray *_readArray;
    NSMutableArray *_unreadArray;
    NSMutableSet *_svrMentionIDSet;
    NSData *_pageBuffer;
    MentionListLastReadInfo *_lastReadInfo;
    double _cacheContainerWidth;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowIgnoreTips; // @synthesize shouldShowIgnoreTips=_shouldShowIgnoreTips;
@property(nonatomic) double cacheContainerWidth; // @synthesize cacheContainerWidth=_cacheContainerWidth;
@property(retain, nonatomic) MentionListLastReadInfo *lastReadInfo; // @synthesize lastReadInfo=_lastReadInfo;
@property(copy, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSMutableSet *svrMentionIDSet; // @synthesize svrMentionIDSet=_svrMentionIDSet;
@property(retain, nonatomic) NSMutableArray *unreadArray; // @synthesize unreadArray=_unreadArray;
@property(retain, nonatomic) NSMutableArray *readArray; // @synthesize readArray=_readArray;
@property(nonatomic) _Bool ignoredMentionsExpanded; // @synthesize ignoredMentionsExpanded=_ignoredMentionsExpanded;
@property(retain, nonatomic) ThankRedPackageInfo *redPackageBannerInfo; // @synthesize redPackageBannerInfo=_redPackageBannerInfo;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderContact *currentContact; // @synthesize currentContact=_currentContact;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) __weak id <WCFinderNotifyCenterUnitVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recalucateCellCacheHeight:(double)arg1;
- (void)addToBlackListWithMention:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)deleteMentionAtIndex:(unsigned long long)arg1 withSectionID:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (_Bool)shouldShowExpandFooter;
- (void)closeIgnoreTips;
- (id)dataSnapshot;
- (_Bool)dataEmpty;
- (unsigned long long)readMentionCount;
- (unsigned long long)unreadMentionCount;
- (id)cellVMWithSectionID:(id)arg1 index:(unsigned long long)arg2;
- (void)cleanUnreadCount;
- (long long)getRequestScene;
- (void)appendMentionList:(id)arg1;
- (void)_fetchDataWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)fetchMoreData;
- (void)expandIgnoredMentionWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearData;
- (void)clearDataWithNotifyChange:(_Bool)arg1;
- (void)refetchData;
- (void)fetchFirstPageData;
- (id)initWithContact:(id)arg1 tabType:(unsigned long long)arg2;

@end

