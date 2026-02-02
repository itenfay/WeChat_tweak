//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UILabel;

@interface SvrErrorTipViewController
{
    UILabel *_tipsLabel;
    NSString *_errTip;
    NSString *_urlStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (void)jumpUrl:(id)arg1;
- (void)setupInfoView;
- (void)viewDidTransitionToNewSize;
- (void)updateErrTip:(id)arg1;
- (void)hideView;
- (void)onDetailBtnClicked;
- (void)onIKnowClicked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

