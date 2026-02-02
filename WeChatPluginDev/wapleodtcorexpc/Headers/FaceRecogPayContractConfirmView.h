//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, RichTextView, UILabel, UIView;
@protocol FaceRecogPayContractConfirmViewDelegate;

@interface FaceRecogPayContractConfirmView
{
    id <FaceRecogPayContractConfirmViewDelegate> _delegate;
    UIView *_contentView;
    UILabel *_titleLabel;
    RichTextView *_linkTextView;
    NSString *_contractUrl;
    NSString *_contractTitle;
    NSString *_contractDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contractDesc; // @synthesize contractDesc=_contractDesc;
@property(retain, nonatomic) NSString *contractTitle; // @synthesize contractTitle=_contractTitle;
@property(retain, nonatomic) NSString *contractUrl; // @synthesize contractUrl=_contractUrl;
@property(retain, nonatomic) RichTextView *linkTextView; // @synthesize linkTextView=_linkTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <FaceRecogPayContractConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getDescForPageSheet;
- (id)getTitleForPageSheet;
- (void)viewDidLoad;
- (id)initWithLink:(id)arg1 Title:(id)arg2 Desc:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

