//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIWindow, MMWindowViewController, UIImageView;

@interface MMWindowMgrObject : NSObject
{
    MMWindowViewController *m_windowVC;
    MMUIWindow *m_Window;
    _Bool isChangeStatusBarStyle;
    _Bool isRequestKeyWindow;
    _Bool isNeedNavCtrl;
    _Bool _isMakeUnVisible;
    _Bool _isMakeUnKey;
    int animationType;
    int transitionOptions;
    long long statusBarStyle;
    long long lastStatusBarStyle;
    UIImageView *blurBgImageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMakeUnKey; // @synthesize isMakeUnKey=_isMakeUnKey;
@property(readonly, nonatomic) _Bool isMakeUnVisible; // @synthesize isMakeUnVisible=_isMakeUnVisible;
@property(nonatomic) _Bool isNeedNavCtrl; // @synthesize isNeedNavCtrl;
@property(retain, nonatomic) UIImageView *blurBgImageView; // @synthesize blurBgImageView;
@property(nonatomic) _Bool isRequestKeyWindow; // @synthesize isRequestKeyWindow;
@property(nonatomic) int transitionOptions; // @synthesize transitionOptions;
@property(nonatomic) _Bool isChangeStatusBarStyle; // @synthesize isChangeStatusBarStyle;
@property(nonatomic) long long lastStatusBarStyle; // @synthesize lastStatusBarStyle;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle;
@property(nonatomic) int animationType; // @synthesize animationType;
- (id)description;
- (void)recoverKeyAndVisibleIfNeeded;
- (void)makeUnKeyAndUnVisible;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isObjectEqual:(id)arg1;
- (id)getMMWindow;
- (void)setMMWindow:(id)arg1;
- (id)getMMWindowVC;
- (void)setMMWindowVC:(id)arg1;

@end

