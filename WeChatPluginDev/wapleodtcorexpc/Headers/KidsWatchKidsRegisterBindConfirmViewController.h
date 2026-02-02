//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KidsWatchButton, KidsWatchTipsCardView, NSString;
@protocol KidsWatchKidsRegisterBindConfirmViewControllerDelegate;

@interface KidsWatchKidsRegisterBindConfirmViewController
{
    KidsWatchTipsCardView *_tipsCardView;
    KidsWatchButton *_continueButton;
    KidsWatchButton *_backButton;
    NSString *_bindedNickName;
    NSString *_bindedHeadImageURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bindedHeadImageURL; // @synthesize bindedHeadImageURL=_bindedHeadImageURL;
@property(retain, nonatomic) NSString *bindedNickName; // @synthesize bindedNickName=_bindedNickName;
@property(retain, nonatomic) KidsWatchButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) KidsWatchButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) KidsWatchTipsCardView *tipsCardView; // @synthesize tipsCardView=_tipsCardView;
- (void)onTapBackButton;
- (void)onTapContinueButton;
- (void)onTapCloseBarButtonItem;
- (_Bool)forceCloseBarButtonItem;
- (void)initSubviews;
- (void)setupWithData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <KidsWatchKidsRegisterBindConfirmViewControllerDelegate> delegate; // @dynamic delegate;

@end

