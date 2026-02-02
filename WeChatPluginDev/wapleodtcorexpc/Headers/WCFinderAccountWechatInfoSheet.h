//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MasterWxAcctInfo, UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderAccountWechatInfoSheet
{
    MasterWxAcctInfo *_accountInfo;
    UIView *_contentContainerView;
    UILabel *_tipsLabel;
    UILabel *_nickNameLabel;
    UILabel *_usernameLabel;
    WCFinderHeadImageView *_headImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) MasterWxAcctInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void)viewDidLayoutSubviews;
- (double)maxHeight;
- (void)reloadView;
- (id)loadContentView;
- (struct CGSize)closeButtonSize;
- (struct CGVector)closeButtonPosition;
- (long long)closeButtonStyle;
- (void)viewDidLoad;

@end

