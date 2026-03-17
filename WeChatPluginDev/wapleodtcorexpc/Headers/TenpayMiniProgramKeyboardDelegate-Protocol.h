//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TenpayMiniProgramKeyboard;

@protocol TenpayMiniProgramKeyboardDelegate <NSObject>

@optional
- (void)miniProgramKeybaordFinish:(TenpayMiniProgramKeyboard *)arg1;
- (void)miniProgramKeybaordTouchDelete:(TenpayMiniProgramKeyboard *)arg1;
- (void)miniProgramKeybaordTouchNumber:(TenpayMiniProgramKeyboard *)arg1;
@end

