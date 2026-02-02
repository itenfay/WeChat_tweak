//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, UIImageView, WCPayFaceHBItem, WCPayWebImageView;
@protocol MMUIViewControllerDelegate, WCPayFaceHBGetViewDelegate;

@interface WCPayFaceHBGetView : UIView
{
    id <WCPayFaceHBGetViewDelegate> m_delegate;
    id <MMUIViewControllerDelegate> m_vcDelegate;
    UIImageView *_backgroundView;
    UIView *_searchView;
    WCPayWebImageView *_imageView;
    UIButton *_historyBtn;
    UIView *_receiveView;
    UIImageView *_hbView;
    UIView *_resultView;
    MMUILabel *_nameView;
    UIButton *_btnDone;
    MMUILabel *_descView;
    UIImageView *_decorationView;
    WCPayFaceHBItem *m_currentItem;
    UIView *oBottomTailView;
    UIView *oTopHeaderView;
    UIView *topView;
    UIImageView *topImageView;
    UIImageView *topImageBackgroundView;
    UIView *bottomView;
    UIImageView *bottomImageView;
    UIView *_blurView;
}

- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFaceHB:(id)arg1;
- (void)removeBlurView;
- (void)setDelegate:(id)arg1;
- (void)onCancelOpen;
- (void)onGet;
- (void)commitPopBackAnimation;
- (void)fadeAnimation:(double)arg1;
- (void)showSuccessOpenAnimation;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)receiveHB:(id)arg1;
- (void)removeView:(id)arg1;
- (void)popbackView:(id)arg1;
- (void)popupView:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)addImageView;
- (void)setViewController:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

