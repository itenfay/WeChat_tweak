//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MVImagePlayer, MVVideoPixelBuffer;

@protocol MVImagePlayerDelegate <NSObject>
- (void)mvImagePlayerHideBuffering:(MVImagePlayer *)arg1;
- (void)mvImagePlayerShowBuffering:(MVImagePlayer *)arg1;
- (void)mvImagePlayer:(MVImagePlayer *)arg1 onVideoFrameOut:(MVVideoPixelBuffer *)arg2;
@end

