//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LoginUserCellView, LoginUserInfo, NSString;

@interface LoginUserCellViewModel : NSObject
{
    _Bool _isLogin;
    _Bool _isLoginLoading;
    _Bool _disable;
    _Bool _isDeleteMode;
    LoginUserCellView *_cellView;
    LoginUserInfo *_userInfo;
    NSString *_errorInfo;
    NSObject *_target;
    SEL _clickCellSelector;
    SEL _clickDeleteBtnSelector;
}

- (void).cxx_destruct;
@property(nonatomic) SEL clickDeleteBtnSelector; // @synthesize clickDeleteBtnSelector=_clickDeleteBtnSelector;
@property(nonatomic) SEL clickCellSelector; // @synthesize clickCellSelector=_clickCellSelector;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
@property(nonatomic) _Bool isDeleteMode; // @synthesize isDeleteMode=_isDeleteMode;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) _Bool isLoginLoading; // @synthesize isLoginLoading=_isLoginLoading;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) LoginUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak LoginUserCellView *cellView; // @synthesize cellView=_cellView;
- (void)onClickDeleteButton;
- (void)onClickCell;
- (void)setIsDeleteMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisable:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLoginStateWithIsLogin:(_Bool)arg1 isLoginLoading:(_Bool)arg2 errorInfo:(id)arg3 animated:(_Bool)arg4;
- (void)setNormalCellWithErrorInfo:(id)arg1 animated:(_Bool)arg2;
- (void)setLoginLoadingCellWithAnimated:(_Bool)arg1;
- (void)setLoginCellWithAnimated:(_Bool)arg1;

@end

