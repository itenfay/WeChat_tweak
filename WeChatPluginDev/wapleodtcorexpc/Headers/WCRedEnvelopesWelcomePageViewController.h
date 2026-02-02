//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCRedEnvelopesWelcomePageLayout;
@protocol WCRedEnvelopesWelcomePageViewControllerDelegate;

@interface WCRedEnvelopesWelcomePageViewController
{
    id <WCRedEnvelopesWelcomePageViewControllerDelegate> m_delegate;
    _Bool m_bDidBack;
    WCRedEnvelopesWelcomePageLayout *_m_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCRedEnvelopesWelcomePageLayout *m_layout; // @synthesize m_layout=_m_layout;
- (void)setDelegate:(id)arg1;
- (void)OnClickBannerActivity;
- (void)OnClickTailActivity;
- (void)OnClickHeadActivity;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)OnLeftBarButtonDone;
- (void)initNavigationBar;
- (void)updateNavigationBarWithFlag:(unsigned int)arg1;
- (_Bool)useTransparentNavibar;
- (id)init;

@end

