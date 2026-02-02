//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FavActivityIndicatorView, UIButton, UILabel;
@protocol WNTranslateTopViewDelegate;

@interface WNTranslateTopView : UIView
{
    UILabel *m_contentLabel;
    FavActivityIndicatorView *m_loadingView;
    UIButton *m_closeBtn;
    UIButton *m_changeLanguageBtn;
    id <WNTranslateTopViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WNTranslateTopViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChangeLanguage:(id)arg1;
- (void)onClose:(id)arg1;
- (void)changeWidthTo:(double)arg1;
- (void)didTranslateComplete;
- (void)beginTranslate;

@end

