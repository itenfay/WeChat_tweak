//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class MMFinderLiveBannerAngel, MMTimer, NSArray, NSMutableArray, NSString, UICollectionView;

@interface MMFinderLiveBannerView : UIControl
{
    _Bool _isFromCompleteViewController;
    _Bool _isInJump;
    _Bool _isInDelete;
    NSMutableArray *__bannerList;
    CDUnknownBlockType _viewDidUpdateAction;
    CDUnknownBlockType _jumpAction;
    CDUnknownBlockType _deleteAction;
    CDUnknownBlockType _bannerShownAction;
    CDUnknownBlockType _bannerUpdateAction;
    unsigned long long _timeInterval;
    UICollectionView *_collectionView;
    MMFinderLiveBannerAngel *_angel;
    long long _pageIndex;
    MMTimer *_timer;
    NSArray *_waitingList;
    NSArray *_applyingList;
    NSMutableArray *_addingBannerQueue;
}

+ (struct CGSize)viewSizeByBannerList:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInDelete; // @synthesize isInDelete=_isInDelete;
@property(nonatomic) _Bool isInJump; // @synthesize isInJump=_isInJump;
@property(retain, nonatomic) NSMutableArray *addingBannerQueue; // @synthesize addingBannerQueue=_addingBannerQueue;
@property(retain, nonatomic) NSArray *applyingList; // @synthesize applyingList=_applyingList;
@property(retain, nonatomic) NSArray *waitingList; // @synthesize waitingList=_waitingList;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) MMFinderLiveBannerAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isFromCompleteViewController; // @synthesize isFromCompleteViewController=_isFromCompleteViewController;
@property(nonatomic) unsigned long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) CDUnknownBlockType bannerUpdateAction; // @synthesize bannerUpdateAction=_bannerUpdateAction;
@property(copy, nonatomic) CDUnknownBlockType bannerShownAction; // @synthesize bannerShownAction=_bannerShownAction;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(copy, nonatomic) CDUnknownBlockType jumpAction; // @synthesize jumpAction=_jumpAction;
@property(copy, nonatomic) CDUnknownBlockType viewDidUpdateAction; // @synthesize viewDidUpdateAction=_viewDidUpdateAction;
@property(retain, nonatomic) NSMutableArray *_bannerList; // @synthesize _bannerList=__bannerList;
- (void)onFinderLiveBannerAngleScrollStart:(id)arg1;
- (void)onFinderLiveBannerAngle:(id)arg1 scrollToIndex:(long long)arg2;
- (void)disableBannerPagAnimation:(_Bool)arg1;
- (void)stopScrollAnimationWithIndex:(long long)arg1;
- (void)showInnerAnimationIfNeed;
- (void)onBannerShowAction;
- (void)onScrollAnimationComplete;
- (void)onOnceTimerEvent;
- (void)checkDeleteNotifyBanner:(long long)arg1 nextIndex:(long long)arg2;
- (void)updateSubTitleIndex:(long long)arg1;
- (void)onTimerEvent;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)stopTimer;
- (_Bool)canStartTimer;
- (void)startOnceTimerIfNeed;
- (void)startCurPageTimer;
- (_Bool)deleteCurrentBannerItem:(long long)arg1;
- (void)onDeleteBannerInfoComplete:(id)arg1 source:(long long)arg2;
- (void)deleteBannerInfo:(id)arg1 source:(long long)arg2;
- (void)showBannerDeleteActionSheet:(id)arg1 source:(long long)arg2;
- (void)checkAddBanner;
- (void)addBanner:(id)arg1;
- (void)updateBannerDataWithId:(id)arg1 subTitleList:(id)arg2 newBanner:(id)arg3;
- (void)stopTimerIfNeed;
- (void)tryUpdateBannerList;
- (void)updateBannerList:(id)arg1;
@property(readonly, nonatomic) NSArray *bannerList;
- (void)updateSelfFrameIfNeed:(id)arg1;
- (void)setBannerList:(id)arg1;
- (void)updateWhenFontSizeChanged;
- (void)resumeCarousel;
- (void)pauseCarousel;
- (void)stopCarousel;
- (CDUnknownBlockType)viewEventAction;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

