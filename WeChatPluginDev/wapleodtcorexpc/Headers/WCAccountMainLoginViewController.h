//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSMutableArray, NSString, UIButton, WCAccountLoginMainPageView;
@protocol WCAccountMainLoginViewControllerDelegate;

@interface WCAccountMainLoginViewController
{
    id <WCAccountMainLoginViewControllerDelegate> _delegate;
    unsigned long long _signMethod;
    unsigned long long _page;
    WCAccountLoginMainPageView *_mainPageView;
    MMUIButton *_changePageButton;
    MMUILabel *_privacyLabel;
    UIButton *_nextButton;
    UIButton *_bothDeviceButton;
    NSMutableArray *_moreButtonTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *moreButtonTypes; // @synthesize moreButtonTypes=_moreButtonTypes;
@property(retain, nonatomic) UIButton *bothDeviceButton; // @synthesize bothDeviceButton=_bothDeviceButton;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) MMUILabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(retain, nonatomic) MMUIButton *changePageButton; // @synthesize changePageButton=_changePageButton;
@property(retain, nonatomic) WCAccountLoginMainPageView *mainPageView; // @synthesize mainPageView=_mainPageView;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) unsigned long long signMethod; // @synthesize signMethod=_signMethod;
- (void)onSignMethodSwitch:(unsigned long long)arg1;
- (unsigned long long)getSignMethod;
- (void)userDidClickMore;
- (void)userDidClickBack;
- (void)switchToPhoneLogin;
- (void)switchToUserLogin;
- (void)showOtherMethodPageSheet;
- (void)onSwitch;
- (void)onBothDeviceClicked;
- (void)onNext;
- (id)privacy;
- (id)titleForChangePageButton;
- (id)titleForNextButton;
- (void)initView;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (void)didReceiveMemoryWarning;
- (void)viewDidBePushOrPresent:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupWithData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

