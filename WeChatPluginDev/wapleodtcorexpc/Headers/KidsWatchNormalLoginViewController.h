//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchButton, KidsWatchSwitchCardView, KidsWatchTipsButton, MMUIButton;
@protocol KidsWatchNormalLoginViewControllerDelegate;

@interface KidsWatchNormalLoginViewController
{
    _Bool _showSyncChat;
    KidsWatchSwitchCardView *_switchCardView;
    KidsWatchTipsButton *_tipsButton;
    KidsWatchButton *_loginButton;
    MMUIButton *_syncChatCheckbox;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showSyncChat; // @synthesize showSyncChat=_showSyncChat;
@property(retain, nonatomic) MMUIButton *syncChatCheckbox; // @synthesize syncChatCheckbox=_syncChatCheckbox;
@property(retain, nonatomic) KidsWatchButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) KidsWatchTipsButton *tipsButton; // @synthesize tipsButton=_tipsButton;
@property(retain, nonatomic) KidsWatchSwitchCardView *switchCardView; // @synthesize switchCardView=_switchCardView;
- (void)onTapSyncChatCheckbox;
- (void)onTapTipsButton;
- (void)onTapLoginButton;
- (void)initSubviews;
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchNormalLoginViewControllerDelegate> delegate; // @dynamic delegate;

@end

