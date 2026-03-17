//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol WCFinderMinimizeContentViewDelegate <NSObject>

@optional
- (void)onMinimizePlayViewImageDidUpdate:(UIImage *)arg1;
- (_Bool)minimizePlayViewNeedSeekBegin;
- (void)onMinimizePlayViewDidPlayToEnd;
- (void)onMinimizePlayViewDidPause;
- (void)onMinimizePlayViewDidPlay;
@end

