//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonFinderDesignerDataCenter, EmoticonStoreDesingerIPViewCell, EmoticonStoreItem, MMStoreEmoticonDesignerPackBrowseViewController, NSString;
@protocol EmoticonFinderDesignerContentLogicDelegate;

@interface EmoticonFinderDesignerContentLogic : NSObject
{
    id <EmoticonFinderDesignerContentLogicDelegate> _delegate;
    EmoticonFinderDesignerDataCenter *_dataCenter;
    EmoticonStoreDesingerIPViewCell *_ipCell;
    EmoticonStoreItem *_rewardingItem;
    MMStoreEmoticonDesignerPackBrowseViewController *_packBrowseVC;
}

+ (void)registerCellsFor:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMStoreEmoticonDesignerPackBrowseViewController *packBrowseVC; // @synthesize packBrowseVC=_packBrowseVC;
@property(retain, nonatomic) EmoticonStoreItem *rewardingItem; // @synthesize rewardingItem=_rewardingItem;
@property(nonatomic) __weak EmoticonStoreDesingerIPViewCell *ipCell; // @synthesize ipCell=_ipCell;
@property(nonatomic) __weak EmoticonFinderDesignerDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(nonatomic) __weak id <EmoticonFinderDesignerContentLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sdkRequestID;
- (void)onNeedReloadForDataChange;
- (void)onFetchEmoticonDataFailedForType:(unsigned long long)arg1;
- (void)onFetchEmoticonFinishedForType:(unsigned long long)arg1 andHasMore:(_Bool)arg2;
- (void)onFirstFetchFailed;
- (void)onFirstFetchFinished;
- (void)onGotTotalEmoticonCount:(unsigned long long)arg1 emojiCount:(unsigned long long)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)OnOpenDetailViewForItem:(id)arg1;
- (void)OnOpenEmojiHalfScreen:(id)arg1;
- (void)openBegVCWith:(id)arg1 storeItem:(id)arg2;
- (void)OnRewardStoreItem:(id)arg1;
- (unsigned long long)DetailVCEntryExtrance;
- (unsigned long long)DetailVCEntryScene;
- (id)getViewController;
- (void)loadMoreForIPSets;
- (_Bool)isIPSetsHasMore;
- (void)onSelectIPSetAtIndex:(unsigned long long)arg1;
- (id)displayingIpSets;
- (void)openViewMoreForType:(unsigned long long)arg1;
- (void)onCellTouchedForType:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (_Bool)hasMoreStatusForType:(unsigned long long)arg1;
- (id)displayingTypes;
- (double)cellHeightForType:(unsigned long long)arg1 atIndexPath:(id)arg2 collectionViewWidth:(double)arg3;
- (unsigned long long)cellCountForType:(unsigned long long)arg1;
- (id)displayItems:(unsigned long long)arg1;
- (id)getCellForColllectionView:(id)arg1 type:(unsigned long long)arg2 indexPath:(id)arg3;
- (unsigned long long)totalEmoticonCount;
- (unsigned long long)totalEmojiCount;
- (id)initWithDataCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

