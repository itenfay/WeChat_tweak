//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;
@protocol WCAccountAffiliatedAcctDelegate;

@interface WCAccountAffiliatedAcctBeginViewController
{
    id <WCAccountAffiliatedAcctDelegate> _delegate;
    MMUIButton *_helpButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(nonatomic) __weak id <WCAccountAffiliatedAcctDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapHelpButton;
- (void)onTapCloseBarButton;
- (void)onTapNextButton;
- (void)onTapRegUseNewPhone;
- (id)getNewHeaderView:(id)arg1;
- (_Bool)useGrayBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (_Bool)useTableView;
- (void)viewDidLoad;

@end

