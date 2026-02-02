//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString;

@interface _TtC9WeAppCore41WALoadingNetWorkInvalidTipsViewController
{
    MISSING_TYPE *tipIcon;
    MISSING_TYPE *tipMsgLabel;
    MISSING_TYPE *retryBtn;
    MISSING_TYPE *capsuleMenu;
    MISSING_TYPE *tipsMsg;
    MISSING_TYPE *showCapsuleMenu;
    MISSING_TYPE *onRetryAction;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onMenuExit:(long long)arg1;
- (void)onRetry:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, copy) CDUnknownBlockType onRetryAction;
@property(nonatomic) _Bool showCapsuleMenu; // @synthesize showCapsuleMenu;
@property(nonatomic, copy) NSString *tipsMsg;

@end

