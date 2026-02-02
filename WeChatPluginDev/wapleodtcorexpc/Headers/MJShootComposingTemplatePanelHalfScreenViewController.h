//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJShootComposingTemplatePanelView, MJShootComposingTemplatePanelViewModel, NSString, UIColor;
@protocol MJShootComposingTemplatePanelHalfScreenViewControllerDelegate;

@interface MJShootComposingTemplatePanelHalfScreenViewController
{
    _Bool _useIphoneUIStyleInIpad;
    UIColor *_maskBackgroundColor;
    id <MJShootComposingTemplatePanelHalfScreenViewControllerDelegate> _delegate;
    MJShootComposingTemplatePanelViewModel *_viewModel;
    MJShootComposingTemplatePanelView *_panelView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJShootComposingTemplatePanelView *panelView; // @synthesize panelView=_panelView;
@property(readonly, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <MJShootComposingTemplatePanelHalfScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useIphoneUIStyleInIpad; // @synthesize useIphoneUIStyleInIpad=_useIphoneUIStyleInIpad;
@property(retain, nonatomic) UIColor *maskBackgroundColor; // @synthesize maskBackgroundColor=_maskBackgroundColor;
- (void)reloadData;
- (void)shootTemplatePanelView:(id)arg1 didSelectTab:(unsigned long long)arg2;
- (void)shootTemplatePanelView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)shootTemplatePanelView:(id)arg1 willDisplayTemplateItem:(id)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)shootTemplatePanelView:(id)arg1 didSelectItem:(id)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)setupPageSheetConfig;
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

