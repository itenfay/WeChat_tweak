//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentErrTipsView;

@protocol WCCommentErrTipsViewDelegate <NSObject>
- (void)onCommentErrTipsViewLinkClicked:(WCCommentErrTipsView *)arg1 nsUrl:(NSString *)arg2;
- (void)onCommentErrTipsViewCustomButtonClicked:(WCCommentErrTipsView *)arg1;
@end

