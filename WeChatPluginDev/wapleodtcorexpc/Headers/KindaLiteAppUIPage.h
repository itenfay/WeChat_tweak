//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaProxy, MMIUIPage, MMLiteAppViewController, MMUIViewController, NSString, OpenLiteAppInfo;
@protocol KindaLiteAppUIPageDelegate;

@interface KindaLiteAppUIPage : NSObject
{
    _Bool _animated;
    MMIUIPage *_kindaUIPage;
    id <KindaLiteAppUIPageDelegate> _delegate;
    NSString *_username;
    KindaProxy *_kindaProxy;
    OpenLiteAppInfo *_openInfo;
    MMUIViewController *_loadingViewController;
    MMLiteAppViewController *_liteappVC;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) __weak MMLiteAppViewController *liteappVC; // @synthesize liteappVC=_liteappVC;
@property(nonatomic) __weak MMUIViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) OpenLiteAppInfo *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) KindaProxy *kindaProxy; // @synthesize kindaProxy=_kindaProxy;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <KindaLiteAppUIPageDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMIUIPage *kindaUIPage; // @synthesize kindaUIPage=_kindaUIPage;
- (id)getTitle;
- (void)setTopRightCallbackImpl:(id)arg1;
- (void)setTopRightBtnTitle:(id)arg1 color:(id)arg2;
- (void)setTopRightBtnImage:(id)arg1;
- (void)setTopLeftBackBtnCallbackImpl:(id)arg1;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)setBackgroundColor:(long long)arg1;
- (void)refreshNavigationBar;
- (void)endIgnoringInteractionEvents;
- (void)endEditing;
- (void)beginIgnoringInteractionEvents;
- (void)closeUI:(_Bool)arg1;
- (void)setStore:(id)arg1;
- (id)dictionayToTransmitKvData:(id)arg1;
- (void)onLiteAppClose:(id)arg1 appUuid:(unsigned int)arg2 extraData:(id)arg3;
- (void)openLiteApp:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

