//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UILabel;
@protocol WCPayECardSuccessViewControllerDelegate;

@interface WCPayECardSuccessViewController
{
    id <WCPayECardSuccessViewControllerDelegate> _delegate;
    NSString *_vcTitle;
    NSString *_successTip;
    UIImageView *_icon;
    UILabel *_detail;
    UIButton *_doneButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *successTip; // @synthesize successTip=_successTip;
@property(copy, nonatomic) NSString *vcTitle; // @synthesize vcTitle=_vcTitle;
@property(nonatomic) __weak id <WCPayECardSuccessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)done;
- (id)headerView;
- (id)navigationBarBackgroundColor;
- (void)reloadTableView;
- (void)leftBarButtonItemClick;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

