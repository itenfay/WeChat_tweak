//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCListenLyricsViewController;

@protocol WCListenLyricsViewControllerDelegate <NSObject>
- (void)wcListenLyricsViewControllerDidDragging:(WCListenLyricsViewController *)arg1;
- (void)wcListenLyricsViewController:(WCListenLyricsViewController *)arg1 didSelectLyric:(double)arg2;

@optional
- (_Bool)wcListenLyricsViewController:(WCListenLyricsViewController *)arg1 shouldSelectLyric:(double)arg2;
@end

