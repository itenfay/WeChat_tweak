//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSMutableArray, NSString, UILabel, UITableView, UIView, WCFinderLocationSelectItem, WCTimelinePOIPickerViewController;
@protocol WCFinderLocationSelectHalfVCDelegate;

@interface WCFinderLocationSelectHalfViewController
{
    _Bool _submitting;
    _Bool _viewHasAppeared;
    _Bool _pageExpReported;
    _Bool _pickedCustomLocation;
    int _enterCommentScene;
    id <WCFinderLocationSelectHalfVCDelegate> _selectDelegate;
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _cancelBlock;
    UILabel *_pageTitle;
    UILabel *_pageDesc;
    UIView *_containerView;
    UITableView *_tableView;
    MMUIButton *_cancelBtn;
    MMUIButton *_submitBtn;
    NSMutableArray *_displayItems;
    WCFinderLocationSelectItem *_selectedItem;
    WCTimelinePOIPickerViewController *_poiPickerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool pickedCustomLocation; // @synthesize pickedCustomLocation=_pickedCustomLocation;
@property(nonatomic) int enterCommentScene; // @synthesize enterCommentScene=_enterCommentScene;
@property(nonatomic) _Bool pageExpReported; // @synthesize pageExpReported=_pageExpReported;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool submitting; // @synthesize submitting=_submitting;
@property(retain, nonatomic) WCTimelinePOIPickerViewController *poiPickerViewController; // @synthesize poiPickerViewController=_poiPickerViewController;
@property(retain, nonatomic) WCFinderLocationSelectItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSMutableArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic) MMUIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *pageDesc; // @synthesize pageDesc=_pageDesc;
@property(retain, nonatomic) UILabel *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(nonatomic) __weak id <WCFinderLocationSelectHalfVCDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
- (void)onPOIPickerFinished:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (id)reportParamsIncludePOIInfo:(_Bool)arg1;
- (void)reportPageExpose;
- (void)updateRecommendLocations:(id)arg1;
- (void)poiClickToSelectCustom;
- (void)selectItem:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (double)expectedHalfScreenHeight;
- (double)getMaxHalfScreenHeight;
- (void)updateUI;
- (void)setupUI;
- (void)baseInit;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRecommendLocations:(id)arg1 commentScene:(int)arg2;
- (_Bool)isForbidPanGesture;
- (_Bool)useTransparentNavibar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

