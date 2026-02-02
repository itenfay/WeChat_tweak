//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, FinderPOIPlugin, ForwardMessageLogicController, MMFlutterViewController, MMLocatingPoiDataLogic, NSString, POIInfo, TakeCarServiceDataLogic, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, WCFinderPOIParamsModel, WCFinderPOIRelatedStreamViewModel, WCFinderPoiBasicInfo, WCFinderStreamProfileDragBarView;
@protocol WCFinderLocationPoiDetailViewDelegate;

@interface POIFlutterViewController
{
    WCFinderPOIParamsModel *_paramsModel;
    WCFinderPOIRelatedStreamViewModel *_poiStreamModel;
    _Bool _isExpand;
    _Bool _isFeedFlowEmpty;
    _Bool _isDragging;
    _Bool _needBkgDragAnimation;
    _Bool _showTakeCarBtn;
    _Bool _showPoiDetail;
    _Bool _shouldPrefetchStream;
    _Bool _isHoldHalfScreen;
    _Bool _isFinderHalfScreen;
    _Bool _canForward;
    unsigned int _reportScene;
    int _enterScene;
    int _commentScene;
    id <WCFinderLocationPoiDetailViewDelegate> _delegate;
    unsigned long long _tabPageScene;
    NSString *_groupBuyBypassData;
    MMFlutterViewController *_flutterVC;
    FinderPOIPlugin *_poiPlugin;
    UIView *_contentContainer;
    UIView *_halfScreenBkgBtn;
    WCFinderStreamProfileDragBarView *_dragBarView;
    POIInfo *_poiInfo;
    WCFinderPoiBasicInfo *_poiBasicInfo;
    FavoritesItem *_favItem;
    ForwardMessageLogicController *_forwardLogicController;
    TakeCarServiceDataLogic *_takeCarDataLogic;
    MMLocatingPoiDataLogic *_dataLogic;
    UIScreenEdgePanGestureRecognizer *_edgeRecognizer;
    UIPanGestureRecognizer *_panGesture;
    unsigned long long _flowLoadingTime;
    struct CGPoint _originalContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long flowLoadingTime; // @synthesize flowLoadingTime=_flowLoadingTime;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeRecognizer; // @synthesize edgeRecognizer=_edgeRecognizer;
@property(retain, nonatomic) MMLocatingPoiDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
@property(retain, nonatomic) TakeCarServiceDataLogic *takeCarDataLogic; // @synthesize takeCarDataLogic=_takeCarDataLogic;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogicController; // @synthesize forwardLogicController=_forwardLogicController;
@property(nonatomic) struct CGPoint originalContentOffset; // @synthesize originalContentOffset=_originalContentOffset;
@property(nonatomic) _Bool canForward; // @synthesize canForward=_canForward;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) WCFinderPoiBasicInfo *poiBasicInfo; // @synthesize poiBasicInfo=_poiBasicInfo;
@property(retain, nonatomic) POIInfo *poiInfo; // @synthesize poiInfo=_poiInfo;
@property(retain, nonatomic) WCFinderStreamProfileDragBarView *dragBarView; // @synthesize dragBarView=_dragBarView;
@property(retain, nonatomic) UIView *halfScreenBkgBtn; // @synthesize halfScreenBkgBtn=_halfScreenBkgBtn;
@property(retain, nonatomic) UIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(retain, nonatomic) FinderPOIPlugin *poiPlugin; // @synthesize poiPlugin=_poiPlugin;
@property(retain, nonatomic) MMFlutterViewController *flutterVC; // @synthesize flutterVC=_flutterVC;
@property(copy, nonatomic) NSString *groupBuyBypassData; // @synthesize groupBuyBypassData=_groupBuyBypassData;
@property(retain, nonatomic) WCFinderPOIParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) _Bool isFinderHalfScreen; // @synthesize isFinderHalfScreen=_isFinderHalfScreen;
@property(nonatomic) _Bool isHoldHalfScreen; // @synthesize isHoldHalfScreen=_isHoldHalfScreen;
@property(nonatomic) _Bool shouldPrefetchStream; // @synthesize shouldPrefetchStream=_shouldPrefetchStream;
@property(nonatomic) _Bool showPoiDetail; // @synthesize showPoiDetail=_showPoiDetail;
@property(nonatomic) _Bool showTakeCarBtn; // @synthesize showTakeCarBtn=_showTakeCarBtn;
@property(readonly, nonatomic) _Bool needBkgDragAnimation; // @synthesize needBkgDragAnimation=_needBkgDragAnimation;
@property(nonatomic) unsigned long long tabPageScene; // @synthesize tabPageScene=_tabPageScene;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) __weak id <WCFinderLocationPoiDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentViewController;
- (_Bool)isCurrentPOIFavorite;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (id)getPluginTopViewController;
- (void)onAddressEntranceTap;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (void)forwardLocationMsg:(id)arg1;
- (void)onForwardButtonTap;
- (void)onChangeScrollState:(_Bool)arg1;
- (void)onChangeFavoriteSelected:(_Bool)arg1;
- (void)onTakeCarButtonTap;
- (void)onNavigateButtonTap;
- (void)listenHalfScreenIsShow:(_Bool)arg1 eventType:(unsigned long long)arg2;
- (id)getHalfContainerView;
- (void)updateUserLocation;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (unsigned long long)scaleLevelToFit;
- (id)getCurMediaListObject;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)closeHalfScreen;
- (void)updateDragProgress:(_Bool)arg1;
- (void)updateFavSelected:(_Bool)arg1;
- (void)expandPOIView;
- (void)shrinkPOIView;
- (double)bottomGradientLayerHeight;
- (double)shrinkContentHeight;
- (double)heightWhenShrinkingWith:(id)arg1;
- (double)topValueOnShrink;
- (double)topValueOnExpand;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setWcOrigin:(struct CGPoint)arg1;
- (void)requestPoiDetail;
- (_Bool)isFromNearbyLife;
- (void)holdHalfScreenPOIView;
- (void)refreshPOIView;
- (void)requestPoiStream;
- (void)prefetchPoiStream;
@property(readonly, nonatomic) UIView *view;
- (id)dataReportParamDictIsPageEvent:(_Bool)arg1;
- (void)setIsExpand:(_Bool)arg1;
- (_Bool)isExpand;
- (void)handleFinderEdgeGesture:(id)arg1;
- (void)copyAddressString;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldNavigationBarAccessibilityHidden;
- (_Bool)useTransparentNavibar;
- (void)initView;
- (struct CGSize)contentContainerSize;
- (void)initData;
- (void)viewDidLoad;
- (void)setupFlutter;
- (void)dealloc;
- (id)initWithParams:(id)arg1;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

