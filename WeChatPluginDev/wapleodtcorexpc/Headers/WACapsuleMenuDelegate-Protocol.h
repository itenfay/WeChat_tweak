//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WAWebViewController;

@protocol WACapsuleMenuDelegate <NSObject>

@optional
- (_Bool)shouldDisableExpandButton;
- (void)onCapsuleViewMutationChange:(unsigned long long)arg1;
- (void)onMenuExpandToFullScreen;
- (void)onMenuLongPressExit;
- (void)onMenuLongPressMore;
- (void)onMenuExit:(long long)arg1;
- (void)onMenuMore;
- (void)onMenuTranslateDoing;
- (void)onMenuTranslate;
- (WAWebViewController *)getCurrentWebView;
@end

