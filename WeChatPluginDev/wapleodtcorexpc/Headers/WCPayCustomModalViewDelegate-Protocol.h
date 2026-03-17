//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayCustomModalView;

@protocol WCPayCustomModalViewDelegate <NSObject>

@optional
- (void)onWCPayCustomModalViewToWeb:(NSString *)arg1 fromButton:(_Bool)arg2;
- (void)onWCPayCustomModalViewDidCancel:(WCPayCustomModalView *)arg1;
- (void)onWCPayCustomModalViewDidConfirm:(WCPayCustomModalView *)arg1;
@end

