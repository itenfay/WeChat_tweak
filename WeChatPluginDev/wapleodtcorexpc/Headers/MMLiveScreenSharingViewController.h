//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton;
@protocol MMLiveScreenSharingViewControllerDelegate;

@interface MMLiveScreenSharingViewController
{
    _Bool _navigationBarHidden;
    id <MMLiveScreenSharingViewControllerDelegate> _delegate;
    long long _status;
    UIButton *_startButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(nonatomic) __weak id <MMLiveScreenSharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startButtonClicked:(id)arg1;
- (void)loadStartButton;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (id)init;

@end

