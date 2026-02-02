//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaProxy, MMIUIPage, MMUIViewController, NSString;
@protocol KindaTinyAppUIPageDelegate;

@interface KindaTinyAppUIPage : NSObject
{
    MMIUIPage *_kindaUIPage;
    id <KindaTinyAppUIPageDelegate> _delegate;
    NSString *_username;
    KindaProxy *_kindaProxy;
    MMUIViewController *_loadingViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(retain, nonatomic) KindaProxy *kindaProxy; // @synthesize kindaProxy=_kindaProxy;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <KindaTinyAppUIPageDelegate> delegate; // @synthesize delegate=_delegate;
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
- (void)destoryTinyAppPage;
- (void)stopLoading;
- (void)startLoading:(_Bool)arg1;
- (void)openTinyApp:(id)arg1 extraData:(id)arg2;

@end

