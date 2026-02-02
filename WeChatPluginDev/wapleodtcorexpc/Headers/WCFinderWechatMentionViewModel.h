//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, WCFinderListLoadingStateModel;
@protocol WCFinderWechatMentionViewModelDelegate;

@interface WCFinderWechatMentionViewModel : NSObject
{
    _Bool _shouldShowNewTips;
    _Bool _hadFetchData;
    _Bool _continueFlag;
    id <WCFinderWechatMentionViewModelDelegate> _delegate;
    unsigned long long _tabType;
    WCFinderListLoadingStateModel *_loadingState;
    NSMutableArray *_dataArray;
    NSArray *_readDataArray;
    NSArray *_unreadDataArray;
    NSMutableSet *_mentionIDSet;
    unsigned long long _currenMaxReadId;
    double _cacheContainerWith;
}

- (void).cxx_destruct;
@property(nonatomic) double cacheContainerWith; // @synthesize cacheContainerWith=_cacheContainerWith;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(nonatomic) _Bool hadFetchData; // @synthesize hadFetchData=_hadFetchData;
@property(nonatomic) unsigned long long currenMaxReadId; // @synthesize currenMaxReadId=_currenMaxReadId;
@property(retain, nonatomic) NSMutableSet *mentionIDSet; // @synthesize mentionIDSet=_mentionIDSet;
@property(retain, nonatomic) NSArray *unreadDataArray; // @synthesize unreadDataArray=_unreadDataArray;
@property(retain, nonatomic) NSArray *readDataArray; // @synthesize readDataArray=_readDataArray;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool shouldShowNewTips; // @synthesize shouldShowNewTips=_shouldShowNewTips;
@property(retain, nonatomic) WCFinderListLoadingStateModel *loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) __weak id <WCFinderWechatMentionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)mentionType;
- (void)deleteMentionWithIndexPath:(id)arg1;
- (void)deleteMentionIndexPath:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)mergeCellViewModel:(id)arg1;
- (void)appendDataArrayWithMentions:(id)arg1;
- (void)fetchLastMentionsWithMention;
- (void)fetchLocalMentions;
- (void)updateLastWechatMentionReadId;
- (_Bool)_showNewMentionTipsHeader:(unsigned long long)arg1;
- (unsigned long long)getUnreadMentionCount;
- (unsigned long long)getMentionCount;
- (id)getMentionArrayWithSection:(unsigned long long)arg1;
- (id)getMentionCellVMWithIndexPath:(id)arg1;
- (void)fetchNewestMention;
- (id)initWithDelegate:(id)arg1 type:(unsigned long long)arg2;

@end

