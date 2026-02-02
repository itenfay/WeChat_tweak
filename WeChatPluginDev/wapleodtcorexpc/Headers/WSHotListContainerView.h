//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMUIViewController, NSMutableArray, NSString, SearchCgiGuideConfig, WSLocalTemplateController, WSWebViewPluginScheduler;
@protocol SearchGuideViewDelegate;

@interface WSHotListContainerView : UIView
{
    _Bool _isVisable;
    _Bool _enableSendViewAppearJSEvent;
    MMUIViewController *_viewController;
    id <SearchGuideViewDelegate> _delegate;
    WSWebViewPluginScheduler *_pluginScheduler;
    WSLocalTemplateController *_webviewController;
    NSMutableArray *_arrEntryDatas;
    NSMutableArray *_arrButtons;
    MMUILabel *_titleLabel;
    UIView *_lineView;
    SearchCgiGuideConfig *_vertInfo;
    long long _searchSessionID;
}

+ (void)removeCache;
+ (id)getPreloadInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableSendViewAppearJSEvent; // @synthesize enableSendViewAppearJSEvent=_enableSendViewAppearJSEvent;
@property(nonatomic) long long searchSessionID; // @synthesize searchSessionID=_searchSessionID;
@property(retain, nonatomic) SearchCgiGuideConfig *vertInfo; // @synthesize vertInfo=_vertInfo;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *arrButtons; // @synthesize arrButtons=_arrButtons;
@property(retain, nonatomic) NSMutableArray *arrEntryDatas; // @synthesize arrEntryDatas=_arrEntryDatas;
@property(retain, nonatomic) WSLocalTemplateController *webviewController; // @synthesize webviewController=_webviewController;
@property(nonatomic) _Bool isVisable; // @synthesize isVisable=_isVisable;
@property(retain, nonatomic) WSWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) __weak id <SearchGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)reloadWebview;
- (unsigned long long)localJSBizType;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)reloadView;
- (void)sendOnUiInit;
- (void)initPluginScheduler;
- (id)webview;
- (void)onViewAppear;
- (void)onPopOrDismissed;
- (void)showDynamicViewAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)onTapButton:(id)arg1;
- (void)hideContentViewAnimated;
- (void)showContentViewAnimated:(_Bool)arg1;
- (void)observeViewVisableStatus;
- (void)initWebview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tryRecycleSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
// Preceding property had unknown attributes: ?
// Original attribute string: T{CGRect={CGPoint=dd}{CGSize=dd}},?,N

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

