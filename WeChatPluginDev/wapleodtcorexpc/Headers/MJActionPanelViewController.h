//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class MJActionPanelMainMenuView, MJActionPanelViewModel, MJSegmentInspectorView, MJSegmentInspectorViewModel, NSString;
@protocol MJActionPanelViewControllerDelegate;

@interface MJActionPanelViewController : UIViewController
{
    MJActionPanelViewModel *_viewModel;
    MJSegmentInspectorView *_inspectorView;
    id <MJActionPanelViewControllerDelegate> _delegate;
    MJActionPanelMainMenuView *_mainMenuView;
    MJSegmentInspectorViewModel *_bindedSegmentInspectorVM;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MJSegmentInspectorViewModel *bindedSegmentInspectorVM; // @synthesize bindedSegmentInspectorVM=_bindedSegmentInspectorVM;
@property(retain, nonatomic) MJActionPanelMainMenuView *mainMenuView; // @synthesize mainMenuView=_mainMenuView;
@property(nonatomic) __weak id <MJActionPanelViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MJSegmentInspectorView *inspectorView; // @synthesize inspectorView=_inspectorView;
@property(readonly, nonatomic) MJActionPanelViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)setupVoiceChangeInspectorWithExtraOptions:(unsigned long long)arg1;
- (void)showVoiceChagneInspector:(id)arg1 withExtraOptions:(unsigned long long)arg2;
- (void)showVoiceChagneInspector:(id)arg1;
- (void)showTransitionInspector:(id)arg1;
- (void)didSelectSpeechRecognitionMenuItem;
- (void)didSelectVoiceReadMenuItem;
- (void)didSelectVoiceChangeMenuItem;
- (void)didSelectEditCaptionStyleMenuItem;
- (void)didSelectEditCaptionTextMenuItem;
- (void)didSelectOrientationMenuItem;
- (void)didSelectSplitMenuItem;
- (void)didSelectContentRangeMenuItem;
- (void)didSelectReorderMenuItem;
- (void)didSelectDeleteMenuItem;
- (void)didSelectBatchClippingMenuItem;
- (void)didSelectCanvasMenuItem;
- (void)dismissInspectorView:(id)arg1 isFinished:(_Bool)arg2;
- (void)showInspectorView:(id)arg1;
- (void)handleInspectorValueDidChange:(id)arg1;
- (_Bool)willLeaveClipEditing;
- (void)bindInspectorViewModel:(id)arg1;
- (void)didSelectVolumeMenuItem;
- (void)didSelectSpeedMenuItem;
- (void)didSelectPictureMenuItem;
- (void)updateInspectorView:(id)arg1;
- (id)createVolumeInspectorView;
- (id)createFilterInspectorView;
- (void)didSelectFilterMenuItem;
- (void)didSelectCropMenuItem;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (unsigned long long)actionPanelConfigurationForCurrentSegmnt;
- (void)reloadMainMenuWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)updateMainMenuWithPlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)updateMainMenuWithSegmentVM:(id)arg1;
- (void)setupViews;
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

