//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;

@interface WCShortVideoToolbarResultPreviewBottomView
{
    MMUIButton *_cancalBtn;
    MMUIButton *_confirmBtn;
    MMUIButton *_editBtn;
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _editBlock;
}

+ (id)genBtn;
+ (double)defaultHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) MMUIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) MMUIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUIButton *cancalBtn; // @synthesize cancalBtn=_cancalBtn;
- (void)onClickEditBtn;
- (void)onClickCancelBtn;
- (void)onClickConfirmBtn;
- (void)setEditBtnHidden:(_Bool)arg1;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)setupView;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

