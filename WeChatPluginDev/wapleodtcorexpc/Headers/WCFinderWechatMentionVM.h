//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MentionListLastReadInfo, NSData, NSDiffableDataSourceSnapshot, NSMutableArray, NSMutableSet, WCFinderListLoadingStateModel;
@protocol WCFinderWechatMentionVMDelegate;

@interface WCFinderWechatMentionVM : NSObject
{
    _Bool _shouldShowNewTips;
    _Bool _ignoredMentionsExpanded;
    _Bool _shouldShowIgnoreTips;
    id <WCFinderWechatMentionVMDelegate> _delegate;
    WCFinderListLoadingStateModel *_loadingState;
    unsigned long long _tabType;
    NSMutableArray *_readArray;
    NSMutableArray *_unreadArray;
    NSMutableSet *_svrMentionIDSet;
    NSData *_pageBuffer;
    MentionListLastReadInfo *_lastReadInfo;
    double _cacheContainerWidth;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowIgnoreTips; // @synthesize shouldShowIgnoreTips=_shouldShowIgnoreTips;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(nonatomic) double cacheContainerWidth; // @synthesize cacheContainerWidth=_cacheContainerWidth;
@property(retain, nonatomic) MentionListLastReadInfo *lastReadInfo; // @synthesize lastReadInfo=_lastReadInfo;
@property(copy, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSMutableSet *svrMentionIDSet; // @synthesize svrMentionIDSet=_svrMentionIDSet;
@property(retain, nonatomic) NSMutableArray *unreadArray; // @synthesize unreadArray=_unreadArray;
@property(retain, nonatomic) NSMutableArray *readArray; // @synthesize readArray=_readArray;
@property(nonatomic) _Bool ignoredMentionsExpanded; // @synthesize ignoredMentionsExpanded=_ignoredMentionsExpanded;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) _Bool shouldShowNewTips; // @synthesize shouldShowNewTips=_shouldShowNewTips;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) __weak id <WCFinderWechatMentionVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteMentionWithIndexPath:(id)arg1;
- (void)deleteMentionWithIndexPath:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)dataEmpty;
- (unsigned long long)readMentionCount;
- (unsigned long long)unreadMentionCount;
- (_Bool)_showNewMentionTipsHeader:(unsigned long long)arg1;
- (id)cellVMIndexPath:(id)arg1;
- (_Bool)shouldShowExpandFooter;
- (void)closeIgnoreTips;
- (id)dataSnapshot;
- (void)appendMentionList:(id)arg1;
- (long long)getRequestScene;
- (void)_fetchDataWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)fetchMoreData;
- (void)expandIgnoredMentionWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearDataWithNotifyChange:(_Bool)arg1;
- (void)refetchData;
- (void)fetchFirstPageData;
- (id)initWithTabType:(unsigned long long)arg1;

@end

