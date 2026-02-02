//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPlainTextTipFullScreenViewDelegate;

@interface WCPlainTextTipFullScreenView
{
    id <WCPlainTextTipFullScreenViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPlainTextTipFullScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showAnimation;
- (void)layoutSubviews;
- (id)init;
- (void)initView;
- (struct CGRect)getBgImgViewFrameWithImgSize:(struct CGSize)arg1;
- (void)onIKnowItBtnClick:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

