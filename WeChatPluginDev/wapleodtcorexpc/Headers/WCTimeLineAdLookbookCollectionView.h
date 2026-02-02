//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class CAShapeLayer, NSMutableDictionary, NSMutableSet, NSString, WCAdURLImageView;
@protocol WCTimeLineAdLookbookCollectionViewDelegate;

@interface WCTimeLineAdLookbookCollectionView : UICollectionView
{
    NSMutableDictionary *_mediaViewCache;
    id <WCTimeLineAdLookbookCollectionViewDelegate> _lookbookDelegate;
    NSMutableSet *_lastVisibleIndexPaths;
    WCAdURLImageView *_charmImageView;
    CAShapeLayer *_brandNewMediaMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *brandNewMediaMask; // @synthesize brandNewMediaMask=_brandNewMediaMask;
@property(retain, nonatomic) WCAdURLImageView *charmImageView; // @synthesize charmImageView=_charmImageView;
@property(retain, nonatomic) NSMutableSet *lastVisibleIndexPaths; // @synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths;
@property(nonatomic) __weak id <WCTimeLineAdLookbookCollectionViewDelegate> lookbookDelegate; // @synthesize lookbookDelegate=_lookbookDelegate;
@property(retain, nonatomic) NSMutableDictionary *mediaViewCache; // @synthesize mediaViewCache=_mediaViewCache;
- (void)cellsExposureProcess;
- (_Bool)onMediaViewShouldForbidShowingPauseIcon;
- (void)onCanvasPageViewAnimationSetContentHidden:(_Bool)arg1;
- (_Bool)isBrandNewAnimationPlaying;
- (_Bool)onCellViewShouldHideItemTitleForIndex:(unsigned long long)arg1;
- (id)fetchLookbookReportItemForIndex:(unsigned long long)arg1;
- (void)onCellButtonClickedForIndex:(unsigned long long)arg1 originView:(id)arg2;
- (struct CGSize)fetchMediaViewSizeForIndex:(unsigned long long)arg1;
- (id)fetchMediaViewForIndex:(unsigned long long)arg1;
- (id)fetchLookbookCardInfo;
- (void)setVideosControlViewHidden:(_Bool)arg1;
- (void)shutdownAllVideos;
- (void)cleanUpWhileBrandNewAnimationDone;
- (void)getReadyForBrandNewAnimation;
- (void)organizeContentViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

