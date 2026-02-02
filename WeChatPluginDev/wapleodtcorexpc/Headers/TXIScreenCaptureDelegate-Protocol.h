//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXIScreenCaptureDelegate <NSObject>
- (void)onScreenSizeChange:(struct CGSize)arg1;
- (void)onCapturerDidResume;
- (void)onCapturerDidPause;
- (void)onCapturerDidStop;
- (void)onCapturerDidStart;
@end

