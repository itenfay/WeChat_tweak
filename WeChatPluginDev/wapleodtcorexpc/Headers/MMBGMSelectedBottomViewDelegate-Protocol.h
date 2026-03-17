//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedBottomView, MMUIButton;

@protocol MMBGMSelectedBottomViewDelegate <NSObject>

@optional
- (void)onBGMSelectedBottomView:(MMBGMSelectedBottomView *)arg1 didClickLyricOnBtn:(MMUIButton *)arg2;
- (void)onBGMSelectedBottomView:(MMBGMSelectedBottomView *)arg1 didClickMusicOnBtn:(MMUIButton *)arg2;
- (void)onBGMSelectedBottomView:(MMBGMSelectedBottomView *)arg1 didClickOstBtn:(MMUIButton *)arg2;
@end

