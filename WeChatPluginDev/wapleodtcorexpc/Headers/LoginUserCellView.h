//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EmoticonCellLikeButton, LoginUserCellViewModel, MMUILabel, UIButton, UIImageView, UILabel;

@interface LoginUserCellView : UIView
{
    _Bool _isLoginStateViewShowing;
    LoginUserCellViewModel *_viewModel;
    EmoticonCellLikeButton *_backgroundBtn;
    UIImageView *_headImageView;
    MMUILabel *_loginNameLabel;
    MMUILabel *_userNameLabel;
    UIButton *_deleteBtn;
    UILabel *_currentLoginLabel;
    MMUILabel *_loginLoadingLabel;
    UILabel *_errorInfoLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoginStateViewShowing; // @synthesize isLoginStateViewShowing=_isLoginStateViewShowing;
@property(retain, nonatomic) UILabel *errorInfoLabel; // @synthesize errorInfoLabel=_errorInfoLabel;
@property(retain, nonatomic) MMUILabel *loginLoadingLabel; // @synthesize loginLoadingLabel=_loginLoadingLabel;
@property(retain, nonatomic) UILabel *currentLoginLabel; // @synthesize currentLoginLabel=_currentLoginLabel;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) MMUILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) MMUILabel *loginNameLabel; // @synthesize loginNameLabel=_loginNameLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) EmoticonCellLikeButton *backgroundBtn; // @synthesize backgroundBtn=_backgroundBtn;
@property(retain, nonatomic) LoginUserCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateAccessibilityElements;
- (void)updateDeleteModeStateWithAnimated:(_Bool)arg1;
- (void)updateLoginStateWithAnimated:(_Bool)arg1;
- (void)updateBGViewStateWithAnimated:(_Bool)arg1;
- (void)updateViewWithAnimated:(_Bool)arg1;
- (void)configErrorInfoLabel;
- (void)configLoginLoadingLabel;
- (void)configCurrentLoginLabel;

@end

