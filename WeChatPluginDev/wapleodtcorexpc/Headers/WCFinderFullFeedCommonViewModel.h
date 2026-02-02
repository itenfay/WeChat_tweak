//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;
@protocol WCFinderFullFeedCommonVMDelegate;

@interface WCFinderFullFeedCommonViewModel : NSObject
{
    _Bool _shouldPreserveFeeds;
    id <WCFinderFullFeedCommonVMDelegate> _delegate;
    NSMutableArray *_allDataItems;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuff;
    unsigned long long _placeHolderDisplayFlag;
    NSString *_needCleanFeedIDAfterAppend;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *needCleanFeedIDAfterAppend; // @synthesize needCleanFeedIDAfterAppend=_needCleanFeedIDAfterAppend;
@property(nonatomic) unsigned long long placeHolderDisplayFlag; // @synthesize placeHolderDisplayFlag=_placeHolderDisplayFlag;
@property(nonatomic) _Bool shouldPreserveFeeds; // @synthesize shouldPreserveFeeds=_shouldPreserveFeeds;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSMutableArray *allDataItems; // @synthesize allDataItems=_allDataItems;
@property(nonatomic) __weak id <WCFinderFullFeedCommonVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disposeEnhanceInsertFeedsWithContentVM:(id)arg1 eventType:(int)arg2;
- (void)handleComingEnhanceList:(id)arg1 withStreamType:(int)arg2 targetContentVM:(id)arg3;
- (void)enhanceFeedByLatestPostInfo;
- (void)triggerEnhanceListWithContentVM:(id)arg1 eventType:(int)arg2 streamType:(int)arg3;
- (id)transformFinderItemToContentVM:(id)arg1;
- (id)getFeedReportInfoForContentVM:(id)arg1;
- (id)getFeedReportInfoAtCellSection:(long long)arg1;
- (_Bool)containTargetFeedId:(id)arg1;
- (long long)indexAtContentVMTid:(id)arg1;
- (_Bool)insertPopupContentVM:(id)arg1 aboveFeedId:(id)arg2;
- (_Bool)isValiadServerDataItem:(id)arg1;
- (int)feedViewControllerScene;
- (id)lastBuffer;
- (int)tabType;
- (void)collectUnreadDataItems:(id)arg1;
- (unsigned long long)getLastExposedItemsIndex;
- (unsigned long long)getFirstUnExposedItemIndex;
- (id)getAllUnReadLiveFeed;
- (void)realRemoveContentVMDataSourceWithSectionIndexSet:(id)arg1;
- (void)realRemoveContentVMFromDataSource:(id)arg1;
- (unsigned long long)feedIndexOfTid:(id)arg1;
- (unsigned long long)sectionOfTid:(id)arg1;
- (_Bool)isSplitBubbleLayoutVMAtSection:(unsigned long long)arg1;
- (void)onFinderContentVMDelete:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)deleteFeedWithTid:(id)arg1;
- (id)contentMediaIndexPathWithTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (id)contentVMAtIndexPath:(id)arg1;
- (long long)getFeedSectionNum:(long long)arg1;
- (id)contentVMAtSection:(unsigned long long)arg1;
- (_Bool)isDataSection:(unsigned long long)arg1;
- (_Bool)isDataIndexPath:(id)arg1;
- (unsigned long long)getAllDataItemsCount;
- (_Bool)isDataEmpty;
- (unsigned long long)dataItemStartSection;
- (long long)firstFeedNum;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

