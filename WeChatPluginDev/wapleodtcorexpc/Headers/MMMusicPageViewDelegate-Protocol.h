//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton;

@protocol MMMusicPageViewDelegate <NSObject>

@optional
- (UIButton *)getPlayButton;
- (void)onBack2FirstPage;
- (void)onShowSecondPage;
- (void)onFollowArrayUpToShowSecondPage;
- (void)onUpdateBottomBtnColor:(NSString *)arg1;
- (_Bool)isBottomViewHidden;
- (void)showOrHideTopBottomView;
@end

