//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIButton;

@protocol MMTipsViewControllerDelegate <NSObject>

@optional
- (void)onClickEmptyBackgroundViewToHideTips:(id)arg1;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2 withText:(NSString *)arg3 withTipsVC:(id)arg4;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2 tipTag:(long long)arg3 withTipsVC:(id)arg4;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickTipsBtn:(UIButton *)arg1 Index:(long long)arg2;
- (void)onClickTipsBtn:(unsigned long long)arg1;
@end

