//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FixTitleColorButton, GameNoticeAdditionalInfoView, GameNoticeInfo, MMWebImageView, NSString, UIButton, UILabel;
@protocol GameNoticeHalfScreenViewDelegate;

@interface GameNoticeHalfScreenView
{
    GameNoticeInfo *_noticeInfo;
    id <GameNoticeHalfScreenViewDelegate> _delegate;
    MMWebImageView *_infoIcon;
    UILabel *_titleLabel;
    GameNoticeAdditionalInfoView *_additionalView;
    FixTitleColorButton *_confirmButton;
    UIButton *_checkButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) FixTitleColorButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) GameNoticeAdditionalInfoView *additionalView; // @synthesize additionalView=_additionalView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *infoIcon; // @synthesize infoIcon=_infoIcon;
@property(nonatomic) __weak id <GameNoticeHalfScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GameNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
- (void)additionalButtonDidClick;
- (void)pageSheetDidDisappear;
- (void)onConfirmButtonClick;
- (id)titleForConfirmButton;
- (double)detailViewHeight;
- (void)checkButtonClicked;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

