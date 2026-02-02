//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveChooseClarityTableViewModel, MMFinderLiveChooseClarityViewNavBar, MMTableView, NSString, UIView;
@protocol MMFinderLiveChooseClarityDelegate;

@interface MMFinderLiveChooseClarityView
{
    MMFinderLiveChooseClarityTableViewModel *_clarityMethodTableViewModel;
    unsigned long long _fromScene;
    id <MMFinderLiveChooseClarityDelegate> _operationDelegate;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveChooseClarityViewNavBar *_navBar;
    MMTableView *_clarityMethodTableView;
}

+ (id)getSelectedClarityDataItem:(id)arg1;
+ (void)tagSelectStateForClarityDataArray:(id)arg1 chooseInfo:(id)arg2;
+ (_Bool)isCanUseCdnTransInfoWithModelArray:(id)arg1 chooseCdnUrl:(id)arg2;
+ (id)getSwitchStreamClarityDataItemModelArray:(id)arg1 chooseCdnUrl:(id)arg2;
+ (id)transferToClarityModelArray:(id)arg1 liveTask:(id)arg2;
+ (id)changeModelArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *clarityMethodTableView; // @synthesize clarityMethodTableView=_clarityMethodTableView;
@property(retain, nonatomic) MMFinderLiveChooseClarityViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) __weak id <MMFinderLiveChooseClarityDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
- (void)pageSheetDidDisappear;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
@property(readonly, nonatomic) MMFinderLiveChooseClarityTableViewModel *clarityMethodTableViewModel;
- (double)getClarityTableHeight;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)updateData:(id)arg1 chooseInfo:(id)arg2;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithClarityMethodData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

