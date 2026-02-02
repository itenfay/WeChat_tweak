//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIScrollView, WCFinderFeedPickerParams, WCFinderFeedPickerTabView, WCFinderPostMgr;
@protocol WCFinderFeedPickerViewControllerDelegate;

@interface WCFinderFeedPickerViewController
{
    id <WCFinderFeedPickerViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    WCFinderFeedPickerTabView *_tabView;
    NSMutableArray *_tabControllers;
    WCFinderFeedPickerParams *_params;
    NSMutableArray *_tabViewModels;
    unsigned long long _currentIndex;
    WCFinderPostMgr *_postMgr;
    long long _publishTabIndex;
    CDUnknownBlockType _pushCustomVCBlock;
}

+ (_Bool)canShowFinderPicker;
+ (id)pickerWithParams:(id)arg1 supportedTabTypes:(id)arg2;
+ (id)pickerForFinderMusicPublishWithParams:(id)arg1;
+ (id)pickerForWxSnsWithParams:(id)arg1;
+ (id)defaultPickerWithParams:(id)arg1;
+ (id)defaultPicker;
+ (id)pickerForEmoticon:(_Bool)arg1;
+ (id)pickerForEmoticonInImagePicker;
+ (id)defaultPickerForEmoticon;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType pushCustomVCBlock; // @synthesize pushCustomVCBlock=_pushCustomVCBlock;
@property(nonatomic) long long publishTabIndex; // @synthesize publishTabIndex=_publishTabIndex;
@property(retain, nonatomic) WCFinderPostMgr *postMgr; // @synthesize postMgr=_postMgr;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *tabViewModels; // @synthesize tabViewModels=_tabViewModels;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *tabControllers; // @synthesize tabControllers=_tabControllers;
@property(retain, nonatomic) WCFinderFeedPickerTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <WCFinderFeedPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)postMgrStartUpload;
- (void)finderFeedPickerPreviewViewController:(id)arg1 didClickCancelWithDataItem:(id)arg2;
- (void)finderFeedPickerPreviewListViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)finderChooseFeedTabController:(id)arg1 willDisplayItemAtIndex:(long long)arg2 withTabModel:(id)arg3;
- (void)finderChooseFeedTabController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withTabModel:(id)arg3;
- (void)finderSearchPickerViewController:(id)arg1 didSelectWithSearchModel:(id)arg2 index:(long long)arg3;
- (void)finderFeedPickerTabView:(id)arg1 didSelected:(long long)arg2;
- (void)showPreviewWithViewModel:(id)arg1 index:(unsigned long long)arg2;
- (void)onLimitedClicked;
- (void)onSearchButtonTap;
- (void)onCameraButtonTap;
- (void)onReturn;
- (void)reportDataWithActionType:(long long)arg1 eventCode:(long long)arg2 feedid:(id)arg3;
- (long long)eventCodeWithTabType:(int)arg1;
- (long long)currentEventCode;
- (int)currentType;
- (id)navigationBarBackgroundColor;
- (void)loadCurrentTabData;
- (void)setupSubView;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (double)getSafeTopInset;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (id)getPickerSessionId;
- (id)initWithTabViewModels:(id)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

