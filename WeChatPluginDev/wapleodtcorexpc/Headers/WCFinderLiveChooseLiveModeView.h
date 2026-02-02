//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMTableView, NSString, UIView, WCFinderLiveChooseLiveModeViewModel, WCFinderLiveStarterSwitchModeItem;
@protocol MMFinderLiveChooseLiveModeDelegate;

@interface WCFinderLiveChooseLiveModeView
{
    WCFinderLiveChooseLiveModeViewModel *_chooseOrientationViewModel;
    _Bool _animateDismissOnSelection;
    NSString *_title;
    id <MMFinderLiveChooseLiveModeDelegate> _operationDelegate;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMTableView *_tableView;
    WCFinderLiveStarterSwitchModeItem *_switchModeItem;
}

+ (id)getSelectedClarityDataItem:(id)arg1;
+ (id)generateAudioSubItemWithAudioSubType:(unsigned long long)arg1;
+ (id)generateDataItemListWithLiveMode:(unsigned long long)arg1 hideLandscpe:(_Bool)arg2 disableVideoLandscape:(_Bool)arg3 hideKTVLiveMode:(_Bool)arg4 redDotQueryBlock:(CDUnknownBlockType)arg5 redDotExposeBlock:(CDUnknownBlockType)arg6 redDotClickBlock:(CDUnknownBlockType)arg7;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveStarterSwitchModeItem *switchModeItem; // @synthesize switchModeItem=_switchModeItem;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) __weak id <MMFinderLiveChooseLiveModeDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) _Bool animateDismissOnSelection; // @synthesize animateDismissOnSelection=_animateDismissOnSelection;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)pageSheetDidDisappear;
- (void)selectStateWithLiveModeSubItem:(id)arg1 dataArray:(id)arg2;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) WCFinderLiveChooseLiveModeViewModel *chooseOrientationViewModel;
- (double)getTableHeight;
- (double)contentViewHeight;
- (void)leftButtonAction;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)updateWithSelectedSubItem:(id)arg1 dataArray:(id)arg2;
- (void)updateWithSwitchModeItem:(id)arg1 dataArray:(id)arg2;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

