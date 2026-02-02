//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveMsgBoxInfo, MMUILabel, MMWebImageView, UIButton, UIView;

@interface MMLiveHalfScreenNoticeView
{
    CDUnknownBlockType _completeBlock;
    FinderLiveMsgBoxInfo *_msgBox;
    UIView *_contentView;
    MMWebImageView *_icon;
    MMUILabel *_contentLabel;
    UIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMWebImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FinderLiveMsgBoxInfo *msgBox; // @synthesize msgBox=_msgBox;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (void)pageSheetWillDisappear;
- (void)cancelButtonClick;
- (void)updateMsgBoxInfo:(id)arg1;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (double)getDefaultHeight;
- (double)getContentHeight;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

