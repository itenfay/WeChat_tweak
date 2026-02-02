//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveWidgetContainerViewConfig, MMFinderLiveWidgetItem, MMTimer, NSMutableArray;

@interface MMFinderLiveWidgetContainerView : UIView
{
    unsigned long long _layoutStyle;
    CDUnknownBlockType _contentSizeDidChangeCallback;
    MMFinderLiveWidgetContainerViewConfig *_config;
    NSMutableArray *_displayingWidgets;
    NSMutableArray *_pendingWidgets;
    MMTimer *_currentWidgetAnimationTimer;
    double _lastWidgetAnimationStartTs;
    MMFinderLiveWidgetItem *_enteringItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveWidgetItem *enteringItem; // @synthesize enteringItem=_enteringItem;
@property(nonatomic) double lastWidgetAnimationStartTs; // @synthesize lastWidgetAnimationStartTs=_lastWidgetAnimationStartTs;
@property(retain, nonatomic) MMTimer *currentWidgetAnimationTimer; // @synthesize currentWidgetAnimationTimer=_currentWidgetAnimationTimer;
@property(retain, nonatomic) NSMutableArray *pendingWidgets; // @synthesize pendingWidgets=_pendingWidgets;
@property(retain, nonatomic) NSMutableArray *displayingWidgets; // @synthesize displayingWidgets=_displayingWidgets;
@property(retain, nonatomic) MMFinderLiveWidgetContainerViewConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidChangeCallback; // @synthesize contentSizeDidChangeCallback=_contentSizeDidChangeCallback;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (double)getWidgetPadding;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)widgetPendingOrBeingDisplayedWithCondition:(CDUnknownBlockType)arg1;
- (_Bool)isWidgetPendingOrBeingDisplayed:(id)arg1;
- (void)onCurrentWidgetEnterAnimationTimeout;
- (void)_doStartCurrentWidgetEnterAnimation;
- (long long)displayingWidgetCount;
- (double)getWidgetLayoutLeft;
- (void)layoutDisplayingWidgetsWhenRemove:(_Bool)arg1;
- (void)layoutDisplayingWidgets;
- (void)displayAllWidgetsInHorizontalDefaultStyle;
- (void)displayAllWidgetsVerticalBigStyle;
- (void)displayPendingWidgetsVerticalBigStyle;
- (void)displayNextPendingWidget;
- (void)_removeWidgetView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeWidgetAnimated:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addWidgetToDisplayQueueWithItem:(id)arg1;
- (void)addWidgetToDisplayQueue:(id)arg1 leadForEnterAnimation:(double)arg2 startEntranceCallback:(CDUnknownBlockType)arg3 changeToNormalStateCallback:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end

