//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CMessageWrap, MMPageSheetAdapter, MMUIButton, MMUILabel, NSString, UIButton, UIImageView;
@protocol WCGroupUndoneEduViewDelegate;

@interface WCGroupUndoneEduView : UIView
{
    _Bool _bShowCloseButton;
    _Bool _bPageSheetStyle;
    id <WCGroupUndoneEduViewDelegate> _undoneDelegate;
    CMessageWrap *_relatedMessage;
    UIImageView *_contentBg;
    MMUIButton *_cancelBtn;
    UIButton *_confirmBtn;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    UIImageView *_imageView;
    MMPageSheetAdapter *_adapter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMPageSheetAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIImageView *contentBg; // @synthesize contentBg=_contentBg;
@property(nonatomic) _Bool bPageSheetStyle; // @synthesize bPageSheetStyle=_bPageSheetStyle;
@property(nonatomic) _Bool bShowCloseButton; // @synthesize bShowCloseButton=_bShowCloseButton;
@property(retain, nonatomic) CMessageWrap *relatedMessage; // @synthesize relatedMessage=_relatedMessage;
@property(nonatomic) __weak id <WCGroupUndoneEduViewDelegate> undoneDelegate; // @synthesize undoneDelegate=_undoneDelegate;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onConfirm:(id)arg1;
- (void)onClose:(id)arg1;
- (void)showInPageSheet;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

