//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveHalfScreenTitleBarView, MMLiveOnlineUserLogic, MMLoadingView, NSString, UIScrollView, UIView;
@protocol MMLiveOnlineStateViewDelegate;

@interface MMLiveOnlineStateView
{
    UIScrollView *_onlineUsersScrollView;
    UIView *_onlineContentView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    MMLiveOnlineUserLogic *_onlineUserLogic;
    id <MMLiveOnlineStateViewDelegate> _delegate;
    unsigned long long _onlineViewCount;
    long long _onlineUserCount;
    MMLoadingView *_loadingView;
    double _viewTopAtPanBegin;
    double _previousPanPositionY;
}

- (void).cxx_destruct;
@property(nonatomic) double previousPanPositionY; // @synthesize previousPanPositionY=_previousPanPositionY;
@property(nonatomic) double viewTopAtPanBegin; // @synthesize viewTopAtPanBegin=_viewTopAtPanBegin;
@property(retain, nonatomic) MMLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long onlineUserCount; // @synthesize onlineUserCount=_onlineUserCount;
@property(nonatomic) unsigned long long onlineViewCount; // @synthesize onlineViewCount=_onlineViewCount;
@property(nonatomic) __weak id <MMLiveOnlineStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMLiveOnlineUserLogic *onlineUserLogic; // @synthesize onlineUserLogic=_onlineUserLogic;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIView *onlineContentView; // @synthesize onlineContentView=_onlineContentView;
@property(readonly, nonatomic) UIScrollView *onlineUsersScrollView; // @synthesize onlineUsersScrollView=_onlineUsersScrollView;
- (void)handleCollectionViewPanGesture:(id)arg1;
- (void)handleOnlineContentViewPanGesture:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)shouldInstallCollectionViewInteractivePan;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)stopLoading:(_Bool)arg1;
- (void)startLoading;
- (void)reloadData;
- (void)fetchOnlineUserList;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)closeWithAnimation:(_Bool)arg1;
- (_Bool)kickAudience:(id)arg1;
- (id)createNoUserLabel;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)initView;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

