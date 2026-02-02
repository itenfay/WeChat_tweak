//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class HalfPage, MMImageView, MMUILabel, NSString, UIView;
@protocol WCPaySaveQrcodeSuccessHalfPageDelegate;

@interface WCPaySaveQrcodeSuccessHalfPage
{
    id <WCPaySaveQrcodeSuccessHalfPageDelegate> _m_delegate;
    MMUILabel *_titleLabel;
    MMImageView *_iconView;
    MMImageView *_pointView;
    UIView *_halfPageContentView;
    HalfPage *_halfPageInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HalfPage *halfPageInfo; // @synthesize halfPageInfo=_halfPageInfo;
@property(retain, nonatomic) UIView *halfPageContentView; // @synthesize halfPageContentView=_halfPageContentView;
@property(retain, nonatomic) MMImageView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) MMImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCPaySaveQrcodeSuccessHalfPageDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)viewDidLoad;
- (id)initWithHalfPageInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

