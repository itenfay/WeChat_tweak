//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderNewUserPrepareResponse, UIScrollView, WCFinderContact;

@interface WCFinderVestAccountInfoViewController
{
    WCFinderContact *_contact;
    UIScrollView *_scrollView;
    FinderNewUserPrepareResponse *_userPrepareResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderNewUserPrepareResponse *userPrepareResponse; // @synthesize userPrepareResponse=_userPrepareResponse;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)clickCloseAction;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)requestUserPrepare;
- (void)viewDidLoad;

@end

