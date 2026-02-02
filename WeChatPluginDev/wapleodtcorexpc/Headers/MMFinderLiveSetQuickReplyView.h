//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAShapeLayer, FinderLiveQuickReplyWordingInfo, MMFinderLiveQuickReplyViewNavBar, MMFinderLiveSetQuickReplyTableViewModel, MMTableView, NSString, UIView;
@protocol MMFinderLiveSetQuickReplyViewDelegate;

@interface MMFinderLiveSetQuickReplyView
{
    MMFinderLiveSetQuickReplyTableViewModel *_tableViewModel;
    _Bool _hasContent;
    _Bool _hasEdit;
    id <MMFinderLiveSetQuickReplyViewDelegate> _operationDelegate;
    CAShapeLayer *_shapeLayer;
    UIView *_contentView;
    MMFinderLiveQuickReplyViewNavBar *_navBar;
    MMTableView *_quickReplyTableView;
    FinderLiveQuickReplyWordingInfo *_model;
    double _keyboardHeight;
    long long _previousOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) _Bool hasEdit; // @synthesize hasEdit=_hasEdit;
@property(nonatomic) _Bool hasContent; // @synthesize hasContent=_hasContent;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) FinderLiveQuickReplyWordingInfo *model; // @synthesize model=_model;
@property(retain, nonatomic) MMTableView *quickReplyTableView; // @synthesize quickReplyTableView=_quickReplyTableView;
@property(retain, nonatomic) MMFinderLiveQuickReplyViewNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) __weak id <MMFinderLiveSetQuickReplyViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (_Bool)isEmptyDataArray:(id)arg1;
- (void)judgeCompleButtonState:(id)arg1;
- (void)quickReplyTableTextViewDidChange:(id)arg1;
- (void)quickReplyTableCleanButtonClick:(id)arg1 dataArray:(id)arg2;
- (void)quickReplyTableAddButtonClick;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (void)handleTextWithModel:(id)arg1;
- (void)handleModelList:(id)arg1;
- (void)actionClick:(_Bool)arg1;
@property(readonly, nonatomic) MMFinderLiveSetQuickReplyTableViewModel *tableViewModel;
- (double)getLotteryTableHeight;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)contentViewHeight;
- (void)updateSelfViewShapeClip;
- (void)setupPageSheetConfig;
- (void)layoutUI;
- (id)getEmptyQuickReplyModel;
- (id)getNewWordingInfoWithModel:(id)arg1;
- (id)changeModelWithModel:(id)arg1;
- (void)pageSheetDidAppear;
- (void)updateInnerModel:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithQuickReplyModel:(id)arg1;
- (void)dealloc;
- (void)handleUIOrientationChanged:(id)arg1;
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

