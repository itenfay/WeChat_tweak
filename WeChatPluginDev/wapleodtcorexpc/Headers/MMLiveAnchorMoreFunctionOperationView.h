//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIView;
@protocol UITableViewDelegate><UITableViewDataSource;

@interface MMLiveAnchorMoreFunctionOperationView
{
    CDUnknownBlockType _functionOperationViewWillDisappear;
    id <UITableViewDelegate><UITableViewDataSource> _operationDelegate;
    UIView *_contentView;
    MMTableView *_mainTableView;
    double _contentViewHeight;
    NSString *_title;
    long long _previousOrientation;
    double _customHeight;
}

+ (id)getAnchorMoreFunctionOperationView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double customHeight; // @synthesize customHeight=_customHeight;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double contentViewHeight; // @synthesize contentViewHeight=_contentViewHeight;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <UITableViewDelegate><UITableViewDataSource> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(copy, nonatomic) CDUnknownBlockType functionOperationViewWillDisappear; // @synthesize functionOperationViewWillDisappear=_functionOperationViewWillDisappear;
- (void)onCloseButtonTapped;
- (void)pageSheetWillDisappear;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadDataAtIndexPath:(id)arg1;
- (void)reloadOperationData;
- (void)updateCustomHeight:(double)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateContentViewHeight:(double)arg1;
- (void)updateDelegate:(id)arg1;
- (void)pageSheetWillAppear;
- (void)pageSheetDidRotation;

@end

