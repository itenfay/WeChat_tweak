//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIScrollView;

@interface XMailBindWechatRegMailViewController
{
    UIScrollView *m_scrollView;
    NSString *_mailAddr;
    NSString *_loginUrl;
    NSString *_headUrl;
    CDUnknownBlockType _onClickConfirmBlock;
    CDUnknownBlockType _onClickUseOtherMailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onClickUseOtherMailBlock; // @synthesize onClickUseOtherMailBlock=_onClickUseOtherMailBlock;
@property(copy, nonatomic) CDUnknownBlockType onClickConfirmBlock; // @synthesize onClickConfirmBlock=_onClickConfirmBlock;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) NSString *mailAddr; // @synthesize mailAddr=_mailAddr;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onClickConfirmBtn:(id)arg1;
- (void)onReturn;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

