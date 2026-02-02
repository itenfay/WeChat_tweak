//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WACapsuleView, WAWebViewController;

@protocol WACapsuleViewDelegate <NSObject>

@optional
- (WAWebViewController *)getCurrentWebView;
- (void)capsuleViewOnMutationChange:(WACapsuleView *)arg1 action:(unsigned long long)arg2;
- (void)capsuleViewOnLongPressExit:(WACapsuleView *)arg1;
- (void)capsuleViewOnLongPressMore:(WACapsuleView *)arg1;
- (void)capsuleViewOnClickExit:(WACapsuleView *)arg1;
- (void)capsuleViewOnClickMore:(WACapsuleView *)arg1;
- (void)capsuleViewOnClickTranslateDoing:(WACapsuleView *)arg1;
- (void)capsuleViewOnClickTranslate:(WACapsuleView *)arg1;
@end

