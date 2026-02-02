//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton;
@protocol WCMomentsShareScopeSectionFooterDelegate;

@interface WCMomentsShareScopeSectionFooterView : UICollectionReusableView
{
    id <WCMomentsShareScopeSectionFooterDelegate> _delegate;
    UIButton *_modifyScopeButton;
}

+ (double)footerMarginTopForIsBlank:(_Bool)arg1;
+ (double)footerHeightForIsBlank:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *modifyScopeButton; // @synthesize modifyScopeButton=_modifyScopeButton;
@property(nonatomic) __weak id <WCMomentsShareScopeSectionFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_initView;
- (void)_onClickModifyScopeButton:(id)arg1;
- (void)updateViewWithIsBlank:(_Bool)arg1;

@end

