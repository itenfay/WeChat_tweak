//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, MMUIButton, MMUILabel, NSString, UIScrollView, UIView;

@interface MMFinderLivePromoteArticleAlertPageSheetView
{
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _dismissCallback;
    UIView *_panelView;
    UIScrollView *_contentScrollView;
    MMUILabel *_titleLabel;
    MMUILabel *_contentLabel;
    MMUIButton *_confirmBtn;
    NSString *_alertContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alertContent; // @synthesize alertContent=_alertContent;
@property(retain, nonatomic) MMUIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onConfirmAction;
- (id)alertTitle;
- (double)getConfirmBtnBottomMargin;
- (double)getAlertContentBottomMargin;
- (double)getTitleContentSumHeight;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutConfirmBtn;
- (void)layoutContentLabel;
- (void)layoutTitleLabel;
- (void)layoutContentScrollView;
- (void)layoutPanelView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setupPageSheetConfig;
- (id)initWithAlertContent:(id)arg1;

@end

