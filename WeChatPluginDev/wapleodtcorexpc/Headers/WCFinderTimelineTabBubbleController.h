//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UILabel, UIView, WCFinderBubbleActionItem, WCFinderCornerTextBubbleView, WCFinderEnterStreamTipBubbleView, WCFinderPopupPanelView, WCFinderShadowBubbleView, WCFinderTLTabBubble, WCFinderTimelineRedDotBubbleDisplayInfo, WCFinderTimelineScrollTipsView;
@protocol WCFinderTimelineTabBubbleDelegate;

@interface WCFinderTimelineTabBubbleController : NSObject
{
    _Bool _forbidenDisplay;
    _Bool _bubbleDismissing;
    _Bool _animatingHidden;
    id <WCFinderTimelineTabBubbleDelegate> _delegate;
    long long _category;
    WCFinderEnterStreamTipBubbleView *_enterStreamTipBubbleView;
    WCFinderPopupPanelView *_popupPanelView;
    UIView *_container;
    WCFinderBubbleActionItem *_currentAnimationItem;
    NSMutableArray *_animationItemArray;
    NSMutableArray *_unreadyItemArray;
    WCFinderTLTabBubble *_bubble;
    NSArray *_anchorFrames;
    double _bubbleHeight;
    UILabel *_networkTipLabel;
    WCFinderCornerTextBubbleView *_lastViewBubbleView;
    WCFinderTimelineScrollTipsView *_statusTipsView;
    unsigned long long _machineFeedMaxIndex;
    NSMutableArray *_exposedTabTypes;
    long long _currentSelectedTabType;
    WCFinderShadowBubbleView *_refreshBubbleView;
}

+ (_Bool)curEnterStreamTipCanJump;
+ (long long)curEnterStreamTipSwitch;
+ (int)convertTimelineTabTypeToTabFlag:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderShadowBubbleView *refreshBubbleView; // @synthesize refreshBubbleView=_refreshBubbleView;
@property(nonatomic) long long currentSelectedTabType; // @synthesize currentSelectedTabType=_currentSelectedTabType;
@property(retain, nonatomic) NSMutableArray *exposedTabTypes; // @synthesize exposedTabTypes=_exposedTabTypes;
@property(nonatomic) unsigned long long machineFeedMaxIndex; // @synthesize machineFeedMaxIndex=_machineFeedMaxIndex;
@property(retain, nonatomic) WCFinderTimelineScrollTipsView *statusTipsView; // @synthesize statusTipsView=_statusTipsView;
@property(retain, nonatomic) WCFinderCornerTextBubbleView *lastViewBubbleView; // @synthesize lastViewBubbleView=_lastViewBubbleView;
@property(retain, nonatomic) UILabel *networkTipLabel; // @synthesize networkTipLabel=_networkTipLabel;
@property(nonatomic) double bubbleHeight; // @synthesize bubbleHeight=_bubbleHeight;
@property(retain, nonatomic) NSArray *anchorFrames; // @synthesize anchorFrames=_anchorFrames;
@property(nonatomic) _Bool animatingHidden; // @synthesize animatingHidden=_animatingHidden;
@property(retain, nonatomic) WCFinderTLTabBubble *bubble; // @synthesize bubble=_bubble;
@property(nonatomic) _Bool bubbleDismissing; // @synthesize bubbleDismissing=_bubbleDismissing;
@property(retain, nonatomic) NSMutableArray *unreadyItemArray; // @synthesize unreadyItemArray=_unreadyItemArray;
@property(retain, nonatomic) NSMutableArray *animationItemArray; // @synthesize animationItemArray=_animationItemArray;
@property(retain, nonatomic) WCFinderBubbleActionItem *currentAnimationItem; // @synthesize currentAnimationItem=_currentAnimationItem;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) WCFinderPopupPanelView *popupPanelView; // @synthesize popupPanelView=_popupPanelView;
@property(retain, nonatomic) WCFinderEnterStreamTipBubbleView *enterStreamTipBubbleView; // @synthesize enterStreamTipBubbleView=_enterStreamTipBubbleView;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) _Bool forbidenDisplay; // @synthesize forbidenDisplay=_forbidenDisplay;
@property(nonatomic) __weak id <WCFinderTimelineTabBubbleDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)haveTabExposed:(long long)arg1;
- (void)notifyTabSelected:(long long)arg1;
- (void)notifyMachineFeedIndexChanged:(unsigned long long)arg1;
- (void)changeBubbleAlpha:(double)arg1;
- (void)changeTargetBubbleAlphaType:(unsigned long long)arg1 alpha:(double)arg2;
- (void)appendAnimationItemType:(unsigned long long)arg1 showDuration:(long long)arg2 requirements:(id)arg3 checkBlock:(CDUnknownBlockType)arg4 prepareBlock:(CDUnknownBlockType)arg5 showBlock:(CDUnknownBlockType)arg6 dismissBlock:(CDUnknownBlockType)arg7;
- (void)addItemToQueue:(id)arg1;
- (void)checkUnreadyAnimationQueue;
- (void)notifyBottomChange;
- (void)checkAnimationQueue;
- (void)checkAnimationQueueThrottled:(double)arg1;
- (void)checkAnimationQueueThrottled;
- (id)getTargetBubbleActionItemBy:(unsigned long long)arg1;
- (_Bool)bubbleAnimationInQueue:(unsigned long long)arg1;
- (void)timelineBubbleActionWhenChangeTab;
- (double)timelineBubbleViewBottom;
- (_Bool)timelineBubbleIsShowing;
- (void)hideStatusRefreshClickTips;
- (void)hideStatusRefreshByScrollToTid:(id)arg1;
- (void)showStatusRefreshClickTips:(CDUnknownBlockType)arg1 feedID:(id)arg2;
- (_Bool)checkTargetBubbleIsShowing:(unsigned long long)arg1;
- (void)hideTargetBubbleType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)showLocalCacheScrollBubble:(id)arg1;
- (void)ensureEnterStreamTipBubbleView;
- (void)onenterStreamTipBubbleDidClick;
- (void)hideEnterStreamTipAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showEnterStreamTipAnimation;
- (void)updateEnterStreamTip;
- (void)checkAndShowEnterStreamTipWithScene:(int)arg1;
- (void)ensureBubbleView;
- (void)checkAndShowNetworkTips;
- (void)checkPopupPanelViewAtTabType:(long long)arg1 feedIndex:(long long)arg2 fromFeedInfo:(id)arg3 enablePopUpShow:(_Bool)arg4;
- (void)resetPopupPanelViewUnexpReasonType:(unsigned long long)arg1;
- (void)showTopRefreshTipsAtCenterX:(double)arg1;
- (void)resetTopRefreshTips;
- (void)onBubbleDidClick;
- (void)_hiddenBubbleView:(_Bool)arg1;
- (void)_createRedDotAnimationActionByCheckBlock:(CDUnknownBlockType)arg1 prepareBlock:(CDUnknownBlockType)arg2 requirements:(id)arg3 duration:(double)arg4;
@property(readonly, nonatomic) _Bool bubbleDisplaying;
@property(readonly, nonatomic) double elementHeight;
- (void)updateBubbleFrame;
@property(readonly, nonatomic) WCFinderTimelineRedDotBubbleDisplayInfo *currentDisplayInfo;
- (void)hideBubbleAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showBubbleAnimation;
- (void)showBubbleWithIconUrls:(id)arg1 text:(id)arg2 style:(long long)arg3 displayInfo:(id)arg4 requirements:(id)arg5;
- (void)showBubbleWithDslRender:(id)arg1 displayInfo:(id)arg2 requirements:(id)arg3;
- (id)covertDisplayIconUrls:(id)arg1 mulitIcon:(_Bool)arg2;
- (long long)displayStyleForShowInfoType:(unsigned long long)arg1;
- (_Bool)_displayTipsWith:(id)arg1 requirements:(id)arg2;
- (_Bool)displayStreamShowInfo:(id)arg1;
- (void)recardTabFrames:(id)arg1;
- (void)onPopupPanelViewBubbleClick;
- (void)layout;
- (void)resetAllSubviews;
- (id)initWithContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

