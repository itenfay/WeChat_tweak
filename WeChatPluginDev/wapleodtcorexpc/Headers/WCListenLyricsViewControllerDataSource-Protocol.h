//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicLyricResolver, WCListenLyricsViewController;

@protocol WCListenLyricsViewControllerDataSource <NSObject>
- (_Bool)isMusicPlaying:(WCListenLyricsViewController *)arg1;

@optional
- (MMMusicLyricResolver *)getCacheLyricResolver;
@end

