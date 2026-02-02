//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UILabel, UIView;

@interface WCStartLiveHalfScreenView
{
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _cancelCallback;
    UIImageView *_iconImageView;
    UILabel *_topTitleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType cancelCallback; // @synthesize cancelCallback=_cancelCallback;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)configdetailView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *detailView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

