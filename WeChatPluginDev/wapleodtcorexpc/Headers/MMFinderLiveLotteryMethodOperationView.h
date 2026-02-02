//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, MMFinderLiveLotteryMethodOperationTableViewModel, MMFinderLiveLotteryMethodOperationViewNavBar, MMTableView, NSIndexPath, NSString, UIView;
@protocol MMFinderLiveLotteryMethodOperationViewDelegate;

@interface MMFinderLiveLotteryMethodOperationView
{
    id <MMFinderLiveLotteryMethodOperationViewDelegate> _operationDelegate;
    MMFinderLiveLotteryMethodOperationTableViewModel *_lotteryMethodTableViewModel;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveLotteryMethodOperationViewNavBar *_navBar;
    MMTableView *_lotteryMethodTableView;
    NSIndexPath *_selectIndexPath;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(retain, nonatomic) MMTableView *lotteryMethodTableView; // @synthesize lotteryMethodTableView=_lotteryMethodTableView;
@property(retain, nonatomic) MMFinderLiveLotteryMethodOperationViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMFinderLiveLotteryMethodOperationTableViewModel *lotteryMethodTableViewModel; // @synthesize lotteryMethodTableViewModel=_lotteryMethodTableViewModel;
@property(nonatomic) __weak id <MMFinderLiveLotteryMethodOperationViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (double)getLotteryTableHeight;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)updateData:(id)arg1;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithLotteryMethodData:(id)arg1;
- (void)pageSheetDidRotation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

