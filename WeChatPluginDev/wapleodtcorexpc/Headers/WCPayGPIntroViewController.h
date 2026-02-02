//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMScrollView, NSString;
@protocol WCPayGPIntroViewControllerDelegate;

@interface WCPayGPIntroViewController
{
    id <WCPayGPIntroViewControllerDelegate> _delegate;
    MMScrollView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMScrollView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <WCPayGPIntroViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)launchBtnClick;
- (void)leftBarButtonClick;
- (void)setupContentView;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

