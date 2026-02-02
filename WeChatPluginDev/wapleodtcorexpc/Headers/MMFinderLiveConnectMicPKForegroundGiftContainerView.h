//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveRewardGiftItem, MMFinderLiveTask, MMFinderLiveTaskId, NSMutableDictionary, PAGFile, RfxPagFile;

@interface MMFinderLiveConnectMicPKForegroundGiftContainerView : UIView
{
    NSMutableDictionary *_usernameForegroundHeightMap;
    MMFinderLiveTaskId *_liveTaskId;
    NSMutableDictionary *_usernameForgroundPAGViewMap;
    MMFinderLiveRewardGiftItem *_foregroundGiftItem;
    PAGFile *_foregroundPAGFile;
    RfxPagFile *_foregroundRfxPAGFile;
    struct CGSize _lastLayoutSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLayoutSize; // @synthesize lastLayoutSize=_lastLayoutSize;
@property(retain, nonatomic) RfxPagFile *foregroundRfxPAGFile; // @synthesize foregroundRfxPAGFile=_foregroundRfxPAGFile;
@property(retain, nonatomic) PAGFile *foregroundPAGFile; // @synthesize foregroundPAGFile=_foregroundPAGFile;
@property(retain, nonatomic) MMFinderLiveRewardGiftItem *foregroundGiftItem; // @synthesize foregroundGiftItem=_foregroundGiftItem;
@property(retain, nonatomic) NSMutableDictionary *usernameForgroundPAGViewMap; // @synthesize usernameForgroundPAGViewMap=_usernameForgroundPAGViewMap;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) NSMutableDictionary *usernameForegroundHeightMap; // @synthesize usernameForegroundHeightMap=_usernameForegroundHeightMap;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)resetPAGState;
- (id)getOrCreateForegroundPAGViewWithUsername:(id)arg1;
- (_Bool)isUseRfxPAG;
- (void)layoutSubviews;
- (void)refreshDisplayWithUsername:(id)arg1 animated:(_Bool)arg2;
- (void)refreshDisplay;
- (void)updateForegroundHeightPercent:(double)arg1 username:(id)arg2;
- (void)forceRelayout;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

@end

