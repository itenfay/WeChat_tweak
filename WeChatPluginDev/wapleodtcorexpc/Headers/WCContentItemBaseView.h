//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ShareDataToOpenSDKController, UINavigationController, WCContentItemViewOptions, WCDataItem, WCMomentsPageContext;
@protocol WCContentItemBaseViewDelegate;

@interface WCContentItemBaseView
{
    UINavigationController *_navigationController;
    WCDataItem *_oDataItem;
    long long _touchCount;
    _Bool _bShowDetail;
    _Bool _bIsLongPressHandled;
    _Bool _bTouchEnds;
    _Bool _bFromDetail;
    _Bool _bSnsScene;
    struct CGSize _fixMediaSize;
    WCContentItemViewOptions *_options;
    unsigned long long _contentItemScene;
    ShareDataToOpenSDKController *_shareDataToOpenSDKController;
    id <WCContentItemBaseViewDelegate> _itemViewDelegate;
    long long _homepageType;
}

+ (struct CGSize)getImageSize:(id)arg1;
+ (double)heightForMedia:(id)arg1 pageContext:(id)arg2 showDetail:(_Bool)arg3;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2 appID:(id)arg3;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long homepageType; // @synthesize homepageType=_homepageType;
@property(nonatomic) __weak id <WCContentItemBaseViewDelegate> itemViewDelegate; // @synthesize itemViewDelegate=_itemViewDelegate;
@property(retain, nonatomic) ShareDataToOpenSDKController *shareDataToOpenSDKController; // @synthesize shareDataToOpenSDKController=_shareDataToOpenSDKController;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(readonly, nonatomic) WCContentItemViewOptions *options; // @synthesize options=_options;
@property(nonatomic) _Bool bSnsScene; // @synthesize bSnsScene=_bSnsScene;
@property(nonatomic) _Bool bShowDetail; // @synthesize bShowDetail=_bShowDetail;
@property(retain, nonatomic) WCDataItem *oDataItem; // @synthesize oDataItem=_oDataItem;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)onMenuControllerWillHide:(id)arg1;
- (_Bool)isMenuItemsVisiable;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canShareToOpenSDK;
- (void)shareToOpenSDK;
- (void)addFavorite;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onMenuItemWillShow;
- (void)onMenuItemClickWithActionType:(long long)arg1;
- (void)LongPressEvents;
- (void)onMore:(id)arg1;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)setFromDetail;
- (void)setNonInteractive;
- (void)contentItemBecomeInvisible;
- (void)contentItemInteractedByUser;
- (void)contentItemDidEndDecelerating;
- (void)contentItemWillDisappear;
- (void)contentItemDidEndDisplaying;
- (void)contentItemWillDisplay;
- (double)fetchVideoCurrentPlaybackTime;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) long long menuTriggerScene;
- (id)getMainContentView;
- (id)getTopViewController;
@property(readonly, nonatomic) WCMomentsPageContext *pageContext;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 snsScene:(_Bool)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3 fixMediaSize:(struct CGSize)arg4;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

