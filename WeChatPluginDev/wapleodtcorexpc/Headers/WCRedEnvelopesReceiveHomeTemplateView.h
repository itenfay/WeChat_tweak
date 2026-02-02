//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMHeadImageView, NSString, UIButton, UIImageView, UILabel, WCPayWebImageView, WCPayWebPagView, WCRedEnvelopesReceiveHomeTemplateItem;
@protocol WCRedEnvelopesReceiveHomeTemplateViewDelegate;

@interface WCRedEnvelopesReceiveHomeTemplateView : UIView
{
    _Bool _isStoryMode;
    _Bool _isMiniPicMode;
    _Bool _isShowPag;
    id <WCRedEnvelopesReceiveHomeTemplateViewDelegate> _m_delegate;
    WCRedEnvelopesReceiveHomeTemplateItem *_templateItem;
    UIButton *_openRedEnvelopesButton;
    UIImageView *_topImageView;
    UIImageView *_curveImageView;
    UIImageView *_defualtImageView;
    UIView *_redEnvelopesView;
    UIView *_topRedView;
    UIView *_topView;
    UIView *_bottomView;
    WCPayWebImageView *_corpImageView;
    UIView *_coverBackgroundView;
    MMHeadImageView *_headImageView;
    UILabel *_nickNameLabel;
    UILabel *_descTitleLabel;
    UIView *_coverTagView;
    UILabel *_tailDescLabel;
    WCPayWebImageView *_corpImageWidgetImageView;
    WCPayWebPagView *_pagView;
    WCPayWebPagView *_atmospherePagView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowPag; // @synthesize isShowPag=_isShowPag;
@property(retain, nonatomic) WCPayWebPagView *atmospherePagView; // @synthesize atmospherePagView=_atmospherePagView;
@property(retain, nonatomic) WCPayWebPagView *pagView; // @synthesize pagView=_pagView;
@property(retain, nonatomic) WCPayWebImageView *corpImageWidgetImageView; // @synthesize corpImageWidgetImageView=_corpImageWidgetImageView;
@property(retain, nonatomic) UILabel *tailDescLabel; // @synthesize tailDescLabel=_tailDescLabel;
@property(retain, nonatomic) UIView *coverTagView; // @synthesize coverTagView=_coverTagView;
@property(retain, nonatomic) UILabel *descTitleLabel; // @synthesize descTitleLabel=_descTitleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *coverBackgroundView; // @synthesize coverBackgroundView=_coverBackgroundView;
@property(retain, nonatomic) WCPayWebImageView *corpImageView; // @synthesize corpImageView=_corpImageView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *topRedView; // @synthesize topRedView=_topRedView;
@property(retain, nonatomic) UIView *redEnvelopesView; // @synthesize redEnvelopesView=_redEnvelopesView;
@property(retain, nonatomic) UIImageView *defualtImageView; // @synthesize defualtImageView=_defualtImageView;
@property(retain, nonatomic) UIImageView *curveImageView; // @synthesize curveImageView=_curveImageView;
@property(retain, nonatomic) UIImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) UIButton *openRedEnvelopesButton; // @synthesize openRedEnvelopesButton=_openRedEnvelopesButton;
@property(nonatomic) _Bool isMiniPicMode; // @synthesize isMiniPicMode=_isMiniPicMode;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(retain, nonatomic) WCRedEnvelopesReceiveHomeTemplateItem *templateItem; // @synthesize templateItem=_templateItem;
@property(nonatomic) __weak id <WCRedEnvelopesReceiveHomeTemplateViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)demoPagFile;
- (void)stopPag;
- (void)onLoadWCPayWebPagOK:(id)arg1;
- (void)updatePagViews;
- (void)playPag;
- (void)setOpenBtnHidden:(_Bool)arg1;
- (void)onLoadWCPayWebImageFail:(id)arg1;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (_Bool)hasRedSkin;
- (void)updateWithTemplateItem:(id)arg1;
- (void)layoutContentView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 templateItem:(id)arg2 showPag:(_Bool)arg3 miniPicMode:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

