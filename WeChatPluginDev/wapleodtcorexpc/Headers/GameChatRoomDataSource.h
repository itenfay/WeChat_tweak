//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GCCollectionViewManager, GCLoadingMoreCellModel, NSMutableArray, NSMutableDictionary;

@interface GameChatRoomDataSource : NSObject
{
    _Bool _isChosenChannel;
    _Bool _isNormalDataSource;
    _Bool _isLoadCacheData;
    NSMutableDictionary *_localClisMsgDict;
    NSMutableDictionary *_serverSeqDict;
    NSMutableArray *_cellModelArray;
    GCCollectionViewManager *_viewManager;
    GCLoadingMoreCellModel *_loadMoreCellModel;
    long long _lastMaxReceiveSeq;
    unsigned long long _minReceiveMessageSeq;
    unsigned long long _maxReceiveMessageSeq;
    long long _channelId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoadCacheData; // @synthesize isLoadCacheData=_isLoadCacheData;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) _Bool isNormalDataSource; // @synthesize isNormalDataSource=_isNormalDataSource;
@property(nonatomic) _Bool isChosenChannel; // @synthesize isChosenChannel=_isChosenChannel;
@property(nonatomic) unsigned long long maxReceiveMessageSeq; // @synthesize maxReceiveMessageSeq=_maxReceiveMessageSeq;
@property(nonatomic) unsigned long long minReceiveMessageSeq; // @synthesize minReceiveMessageSeq=_minReceiveMessageSeq;
@property(nonatomic) long long lastMaxReceiveSeq; // @synthesize lastMaxReceiveSeq=_lastMaxReceiveSeq;
@property(retain, nonatomic) GCLoadingMoreCellModel *loadMoreCellModel; // @synthesize loadMoreCellModel=_loadMoreCellModel;
@property(retain, nonatomic) GCCollectionViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) NSMutableArray *cellModelArray; // @synthesize cellModelArray=_cellModelArray;
@property(retain, nonatomic) NSMutableDictionary *serverSeqDict; // @synthesize serverSeqDict=_serverSeqDict;
@property(retain, nonatomic) NSMutableDictionary *localClisMsgDict; // @synthesize localClisMsgDict=_localClisMsgDict;
- (void)logWithFormat:(id)arg1;
- (void)logStr:(id)arg1;
- (void)clearMinAndMaxMsgSeq;
- (void)onPreviousCellModelReceived:(id)arg1 fromLog:(id)arg2;
- (id)filterdCellModelArray:(id)arg1 fromLog:(id)arg2;
- (void)stopRefreshHeader;
- (void)loadCachedModelArray:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)logNewMsgArrayInsert:(id)arg1 arrayWithTimeNode:(id)arg2 fromLog:(id)arg3;
- (void)appendModelArray:(id)arg1 complection:(CDUnknownBlockType)arg2;
- (void)updateMinAndMaxSeqWithCellArray:(id)arg1;
- (id)addTimeModel:(id)arg1 isApend:(_Bool)arg2 lastMsgTime:(long long)arg3 lastTimeNodeTime:(long long)arg4 firstServerNode:(id)arg5;
- (long long)intervalWithLastTimeNode;
- (long long)intervalWithLastMsgTime;
- (id)centerTipTextModelForText:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2;
- (id)timeCellModelForTime:(long long)arg1;
- (void)clearCacheDataIfNeed;
- (void)clearPreviousDataIfNeed;
- (_Bool)isEmpty;
- (void)clearAllData;
- (void)reloadData;
- (void)removeLoadMoreCell;
- (void)onNewCellModelAdd:(id)arg1;
- (_Bool)appendModel:(id)arg1;
- (void)insertNewCellModel:(id)arg1;
- (id)logInfoWithDict:(id)arg1 tip:(id)arg2;
- (void)handleChosenChannelWithRefreshCellModelArray:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChatBaseCellModel:(CDUnknownBlockType)arg1;
- (_Bool)checkContainsSeq:(unsigned long long)arg1;
- (void)refreshWithCellModelArray:(id)arg1 andInvisibleList:(id)arg2;
- (void)loadFirstPageWithCellModelArray:(id)arg1;
- (_Bool)checkArrayEqualViewManager;
- (void)replaceLocalMsgWithServerMsg:(id)arg1;
- (id)filteredCellModelArray:(id)arg1 msgAlreayInLocalArray:(id)arg2;
- (_Bool)canAddModel:(id)arg1;
- (id)initWithLoadMoreCellModel:(id)arg1;
- (id)init;

@end

