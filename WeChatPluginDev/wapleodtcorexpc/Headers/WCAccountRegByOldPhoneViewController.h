//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, UIButton;
@protocol WCAccountRegByOldPhoneViewControllerDelegate;

@interface WCAccountRegByOldPhoneViewController
{
    id <WCAccountRegByOldPhoneViewControllerDelegate> m_delegate;
    MMWebImageView *_headImageView;
    MMUILabel *_nicknameLabel;
    MMUILabel *_contentLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void)initView;
- (void)initNavigationBar;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;

@end

