//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIButton, UILabel, UIView;
@protocol StorageDeepCleanDelete;

@interface StorageDeepCleanViewController
{
    float _cleanProgress;
    float _estimatedTimeMins;
    id <StorageDeepCleanDelete> _delegate;
    UIView *_iconView;
    UILabel *_titleLabel;
    UILabel *_desLabel;
    UILabel *_estimateTimeLabel;
    UIButton *_bottomButton;
    unsigned long long _dcState;
    NSArray *_cleanArray;
    unsigned long long _beforeCleanSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long beforeCleanSize; // @synthesize beforeCleanSize=_beforeCleanSize;
@property(retain, nonatomic) NSArray *cleanArray; // @synthesize cleanArray=_cleanArray;
@property(nonatomic) float estimatedTimeMins; // @synthesize estimatedTimeMins=_estimatedTimeMins;
@property(nonatomic) float cleanProgress; // @synthesize cleanProgress=_cleanProgress;
@property(nonatomic) unsigned long long dcState; // @synthesize dcState=_dcState;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UILabel *estimateTimeLabel; // @synthesize estimateTimeLabel=_estimateTimeLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <StorageDeepCleanDelete> delegate; // @synthesize delegate=_delegate;
- (void)onPressCancel;
- (void)onPressOK;
- (void)deepCleanBegin;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showCancelActionSheet;
- (void)showDeleteActionSheet;
- (void)onDeepCleanStop:(id)arg1;
- (void)onDeepClean:(id)arg1 progressChange:(float)arg2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (id)initWithDeepCleanClass:(id)arg1;
- (void)setupView;
- (void)refreshView;
- (id)p_getTitleAttrString:(id)arg1;
- (void)p_getWarningTipView;
- (void)calculateProgressLevel;
- (id)getCurrentEstimateTime;
- (id)getCurrentProgress;
- (id)getCleanSizeDesc;
- (id)getEstimateTimeDesc;
- (unsigned long long)getCleanSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

