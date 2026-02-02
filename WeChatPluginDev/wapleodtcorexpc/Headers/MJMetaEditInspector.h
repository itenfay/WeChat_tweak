//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJInspectorToolBar, MJMetaEditViewModel, MJPageView, MJPublisherInspectorContainerView, NSString;
@protocol MJMetaEditInspectorDelegate;

@interface MJMetaEditInspector : UIViewController
{
    _Bool _hasChanges;
    _Bool _bFirstAppeared;
    id <MJMetaEditInspectorDelegate> _delegate;
    MJPublisherInspectorContainerView *_containerView;
    MJMetaEditViewModel *_viewModel;
    MJPageView *_pageView;
    MJInspectorToolBar *_toolBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJInspectorToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) MJPageView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) _Bool bFirstAppeared; // @synthesize bFirstAppeared=_bFirstAppeared;
@property(retain, nonatomic) MJMetaEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MJPublisherInspectorContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic) __weak id <MJMetaEditInspectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentLocationPickerWithPanel:(id)arg1;
- (void)didClickEditMetaEditGeographicPanel:(id)arg1;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (long long)numberOfPagesInPageView:(id)arg1;
- (void)reloadEditingPage;
- (void)callBackDateIfNeeded;
- (void)setupCallback;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

