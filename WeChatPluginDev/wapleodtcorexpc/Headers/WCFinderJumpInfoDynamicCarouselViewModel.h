//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo_DynamicCarouselCardStyle, FinderJumpInfo_PartialCarouselCardStyle, FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc, FinderJumpInfo_Style, MMTimer, NSAttributedString, NSString, NSTimer, UIColor, WCFinderFeedContentVM, WCFinderJumpInfo, WCFinderJumpInfoDynamicCarouselDetailSubViewItem, WCFinderJumpInfoDynamicCarouselDetailViewItem, WCFinderJumpInfoDynamicCarouselTitleViewItem;
@protocol WCFinderJumpInfoDynamicCarouselViewModelDelegate;

@interface WCFinderJumpInfoDynamicCarouselViewModel : NSObject
{
    _Bool _isPlayingCarousel;
    int _showPosition;
    id <WCFinderJumpInfoDynamicCarouselViewModelDelegate> _delegate;
    WCFinderFeedContentVM *_feedContentVM;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_Style *_originalShowStyle;
    FinderJumpInfo_Style *_currentShowStyle;
    FinderJumpInfo_DynamicCarouselCardStyle *_currentDynamicCarouselCardStyle;
    unsigned long long _cardShape;
    double _appearingDelayTimeInMS;
    double _expandingDelayTimeInMS;
    NSString *_iconURL;
    WCFinderJumpInfoDynamicCarouselDetailSubViewItem *_iconStatusViewItem;
    WCFinderJumpInfoDynamicCarouselTitleViewItem *_titleViewItem;
    WCFinderJumpInfoDynamicCarouselDetailViewItem *_detailViewItem;
    NSAttributedString *_bottomAttributedText;
    NSString *_actionIconName;
    NSString *_actionTitle;
    UIColor *_actionTitleColor;
    UIColor *_actionBackgroundColor;
    MMTimer *_contentUpdatingTimer;
    NSTimer *_asyncLoadInfoDelayTimer;
    FinderJumpInfo_PartialCarouselCardStyle *_currentCardStyle;
    FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc *_currentCarouselDesc;
}

+ (id)viewModelWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderJumpInfo_PartialCarouselCardStyle_CarouselDesc *currentCarouselDesc; // @synthesize currentCarouselDesc=_currentCarouselDesc;
@property(retain, nonatomic) FinderJumpInfo_PartialCarouselCardStyle *currentCardStyle; // @synthesize currentCardStyle=_currentCardStyle;
@property(retain, nonatomic) NSTimer *asyncLoadInfoDelayTimer; // @synthesize asyncLoadInfoDelayTimer=_asyncLoadInfoDelayTimer;
@property(retain, nonatomic) MMTimer *contentUpdatingTimer; // @synthesize contentUpdatingTimer=_contentUpdatingTimer;
@property(readonly, nonatomic) _Bool isPlayingCarousel; // @synthesize isPlayingCarousel=_isPlayingCarousel;
@property(retain, nonatomic) UIColor *actionBackgroundColor; // @synthesize actionBackgroundColor=_actionBackgroundColor;
@property(retain, nonatomic) UIColor *actionTitleColor; // @synthesize actionTitleColor=_actionTitleColor;
@property(copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(copy, nonatomic) NSString *actionIconName; // @synthesize actionIconName=_actionIconName;
@property(copy, nonatomic) NSAttributedString *bottomAttributedText; // @synthesize bottomAttributedText=_bottomAttributedText;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailViewItem *detailViewItem; // @synthesize detailViewItem=_detailViewItem;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselTitleViewItem *titleViewItem; // @synthesize titleViewItem=_titleViewItem;
@property(retain, nonatomic) WCFinderJumpInfoDynamicCarouselDetailSubViewItem *iconStatusViewItem; // @synthesize iconStatusViewItem=_iconStatusViewItem;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) double expandingDelayTimeInMS; // @synthesize expandingDelayTimeInMS=_expandingDelayTimeInMS;
@property(nonatomic) double appearingDelayTimeInMS; // @synthesize appearingDelayTimeInMS=_appearingDelayTimeInMS;
@property(nonatomic) unsigned long long cardShape; // @synthesize cardShape=_cardShape;
@property(readonly, nonatomic) FinderJumpInfo_DynamicCarouselCardStyle *currentDynamicCarouselCardStyle; // @synthesize currentDynamicCarouselCardStyle=_currentDynamicCarouselCardStyle;
@property(readonly, nonatomic) FinderJumpInfo_Style *currentShowStyle; // @synthesize currentShowStyle=_currentShowStyle;
@property(readonly, nonatomic) FinderJumpInfo_Style *originalShowStyle; // @synthesize originalShowStyle=_originalShowStyle;
@property(readonly, nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(readonly, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(readonly, nonatomic) WCFinderFeedContentVM *feedContentVM; // @synthesize feedContentVM=_feedContentVM;
@property(nonatomic) __weak id <WCFinderJumpInfoDynamicCarouselViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)printCurrentCarouselInfo;
- (void)notifyDidUpdateCarouselContent;
- (void)notifyDidSwitchCarouselContent;
- (void)notifyDidReloadViewProperties:(_Bool)arg1;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)handleContentUpdatingTimer:(id)arg1;
- (void)stopContentUpdatingTimer;
- (void)startContentUpdatingTimerIfNeeded;
- (_Bool)shouldUpdateContentConstantly;
- (void)_updateNextCarouselItem;
- (void)_pendNextCarouselItem;
- (void)restartPlayingCarousel;
- (void)stopPlayingCarousel;
- (void)startPlayingCarousel;
- (void)finderJumpInfoAsyncLoadManager:(id)arg1 didFetchJumpInfoStylesWithRecord:(id)arg2 updated:(_Bool)arg3;
- (void)cancelAsyncLoadInfo;
- (void)pendAsyncLoadInfo:(_Bool)arg1 afterDelay:(double)arg2;
- (void)asyncLoadInfo:(_Bool)arg1;
- (void)reloadBottomText;
- (void)reloadDetailViewItem;
- (void)reloadTitleViewItem;
- (void)reloadIconViewItem;
- (void)reloadViewProperties;
- (void)reloadCurrentShowStyle;
- (void)updateJumpInfo:(id)arg1 showPosition:(int)arg2;
@property(readonly, nonatomic) UIColor *defaultActionBackgroundColor;
@property(readonly, nonatomic) UIColor *defaultActionTitleColor;
- (void)dealloc;
- (id)initWithFeedContentVM:(id)arg1 jumpInfo:(id)arg2 showPosition:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

