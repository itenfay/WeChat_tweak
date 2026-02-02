//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, UIImageView, WCRedesignTextItem;
@protocol WCAccountGraphicVerifyViewControllerDelegate;

@interface WCAccountGraphicVerifyViewController
{
    id <WCAccountGraphicVerifyViewControllerDelegate> m_delegate;
    MMUILabel *_titleLabel;
    WCRedesignTextItem *_textItem;
    UIImageView *_imageView;
    MMUIButton *_refreshButton;
    UIButton *_verifyButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(retain, nonatomic) MMUIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCRedesignTextItem *textItem; // @synthesize textItem=_textItem;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)onNext;
- (void)checkNext;
- (void)refreshViewWithData:(id)arg1;
- (void)initView;
- (void)initNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useRedesignStyle;
- (_Bool)useSheetView;
- (_Bool)autoHandleKeyboardEvent;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

