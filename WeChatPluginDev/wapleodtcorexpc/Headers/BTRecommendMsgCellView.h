//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendMsgCellViewModel, CALayer, MMUILabel, MMWebImageView, RichTextView, UIButton, UIImageView, UIView;

@interface BTRecommendMsgCellView
{
    _Bool _bizContentKeepHL;
    _Bool _appMsgKeepHL;
    MMUILabel *_msgTitleLabel;
    UIButton *_bizContentView;
    MMWebImageView *_headerView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_recommendReasonLabel;
    RichTextView *_signatureLabel;
    UIView *_separateLine;
    UIButton *_appMsgContentView;
    MMUILabel *_appMsgRecommendReasonLabel;
    RichTextView *_appMsgTitleLabel;
    UIImageView *_arrowView;
    CALayer *_bizContentHighlightLayer;
    CALayer *_appMsgHighlightLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool appMsgKeepHL; // @synthesize appMsgKeepHL=_appMsgKeepHL;
@property(nonatomic) _Bool bizContentKeepHL; // @synthesize bizContentKeepHL=_bizContentKeepHL;
@property(retain, nonatomic) CALayer *appMsgHighlightLayer; // @synthesize appMsgHighlightLayer=_appMsgHighlightLayer;
@property(retain, nonatomic) CALayer *bizContentHighlightLayer; // @synthesize bizContentHighlightLayer=_bizContentHighlightLayer;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) RichTextView *appMsgTitleLabel; // @synthesize appMsgTitleLabel=_appMsgTitleLabel;
@property(retain, nonatomic) MMUILabel *appMsgRecommendReasonLabel; // @synthesize appMsgRecommendReasonLabel=_appMsgRecommendReasonLabel;
@property(retain, nonatomic) UIButton *appMsgContentView; // @synthesize appMsgContentView=_appMsgContentView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) RichTextView *signatureLabel; // @synthesize signatureLabel=_signatureLabel;
@property(retain, nonatomic) MMUILabel *recommendReasonLabel; // @synthesize recommendReasonLabel=_recommendReasonLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIButton *bizContentView; // @synthesize bizContentView=_bizContentView;
@property(retain, nonatomic) MMUILabel *msgTitleLabel; // @synthesize msgTitleLabel=_msgTitleLabel;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleLongPressEx:(id)arg1;
- (void)onJumpToProfile;
- (void)onClickAppMsgView:(id)arg1;
- (void)makeSafeLabel:(id)arg1 fixWidth:(double)arg2;
- (void)layoutSubviews;
- (unsigned long long)cellRectCorner;
- (void)initBizAppMsgViews;
- (void)initBizContentView;
- (void)initMsgTitleLabel;
- (void)onUpdateViewModel;
- (void)initSubviews;

// Remaining properties
@property(readonly, nonatomic) BTRecommendMsgCellViewModel *viewModel;

@end

