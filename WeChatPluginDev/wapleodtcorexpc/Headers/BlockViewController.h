//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLoadingView, NSString;
@protocol BlockViewControllerDelegate;

@interface BlockViewController
{
    MMLoadingView *_loadingView;
    NSString *_viewTitle;
    NSString *_failTips;
    NSString *_loadingWording;
    id <BlockViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *loadingWording; // @synthesize loadingWording=_loadingWording;
@property(retain, nonatomic) NSString *failTips; // @synthesize failTips=_failTips;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
- (void)onReturn;
- (void)showFailView;
- (void)viewDidLoad;

@end

