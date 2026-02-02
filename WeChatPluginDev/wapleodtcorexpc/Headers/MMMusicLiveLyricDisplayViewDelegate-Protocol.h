//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLiveLyricDisplayView, NSString;

@protocol MMMusicLiveLyricDisplayViewDelegate <NSObject>

@optional
- (void)liveLyricDisplayView:(MMMusicLiveLyricDisplayView *)arg1 completeShowLyric:(NSString *)arg2;
@end

