//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMLoadingIndicatorView, MMUILabel, MMUIView, UIImageView;

@interface WCPayFacingReceiveErrorTipsView : UIView
{
    long long _state;
    MMUIView *_loadingView;
    MMLoadingIndicatorView *_loadingIcon;
    MMUILabel *_loadingLabel;
    UIImageView *_iconImageView;
    MMUILabel *_errorLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(retain, nonatomic) MMUIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)setupContentView;
- (void)updateTipsViewWithState:(long long)arg1 withErrorMsg:(id)arg2 hasMchCode:(_Bool)arg3;
- (void)updateTipsViewWithState:(long long)arg1 hasMchCode:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

