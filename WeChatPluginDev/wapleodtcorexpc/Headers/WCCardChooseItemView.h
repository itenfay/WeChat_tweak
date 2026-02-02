//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, WCCardChooseInfo;
@protocol WCCardChooseItemViewDelegate;

@interface WCCardChooseItemView
{
    WCCardChooseInfo *_chooseInfo;
    _Bool _select;
    UIImageView *_checkBoxImgView;
    id <WCCardChooseItemViewDelegate> _delegate;
}

+ (double)heightForChooseItemView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardChooseItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)genInvoiceView;
- (void)updateCellSelectStatus:(_Bool)arg1;
- (void)onClickCell;
- (id)genLogoView;
- (id)genCardBgView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 cardChooseInfo:(id)arg2 delegate:(id)arg3;

@end

