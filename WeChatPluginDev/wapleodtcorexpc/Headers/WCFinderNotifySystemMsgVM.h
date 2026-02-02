//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MentionListLastReadInfo, NSData, NSMutableArray, NSMutableSet, NSString, WCFinderContact, WCFinderListLoadingStateModel;
@protocol WCFinderNotifySystemMsgVMDelegate;

@interface WCFinderNotifySystemMsgVM : NSObject
{
    id <WCFinderNotifySystemMsgVMDelegate> _delegate;
    WCFinderContact *_currentContact;
    WCFinderListLoadingStateModel *_loadingState;
    NSString *_currentFinderUsername;
    unsigned long long _identityScene;
    NSMutableArray *_readArray;
    NSMutableArray *_unreadArray;
    NSMutableSet *_svrMentionIDSet;
    NSData *_pageBuffer;
    MentionListLastReadInfo *_lastReadInfo;
    double _containerCacheWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double containerCacheWidth; // @synthesize containerCacheWidth=_containerCacheWidth;
@property(retain, nonatomic) MentionListLastReadInfo *lastReadInfo; // @synthesize lastReadInfo=_lastReadInfo;
@property(copy, nonatomic) NSData *pageBuffer; // @synthesize pageBuffer=_pageBuffer;
@property(retain, nonatomic) NSMutableSet *svrMentionIDSet; // @synthesize svrMentionIDSet=_svrMentionIDSet;
@property(retain, nonatomic) NSMutableArray *unreadArray; // @synthesize unreadArray=_unreadArray;
@property(retain, nonatomic) NSMutableArray *readArray; // @synthesize readArray=_readArray;
@property(nonatomic) unsigned long long identityScene; // @synthesize identityScene=_identityScene;
@property(retain, nonatomic) NSString *currentFinderUsername; // @synthesize currentFinderUsername=_currentFinderUsername;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderContact *currentContact; // @synthesize currentContact=_currentContact;
@property(nonatomic) __weak id <WCFinderNotifySystemMsgVMDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getRequestScene;
- (void)recalucateCellCacheHeight:(double)arg1;
- (id)dataSnapshot;
- (id)cellVMWithIndexPath:(id)arg1;
- (_Bool)dataEmpty;
- (unsigned long long)readMentionCount;
- (unsigned long long)unreadMentionCount;
- (void)appendMentionList:(id)arg1;
- (void)_fetchData;
- (void)fetchMoreData;
- (void)clearDataWithNotifyChange:(_Bool)arg1;
- (_Bool)isAuthorScene;
- (void)refetchData;
- (void)fetchFirstPageData;
- (id)initWithFinderUsername:(id)arg1 identityScene:(unsigned long long)arg2;

@end

