//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCFinderFocusCellProtocol <NSObject>
- (_Bool)shouldCaluculateAsFocusCell;

@optional
- (void)pauseMediaPlayShowPauseBtn:(_Bool)arg1;
- (_Bool)currentMediaIsPlay;
- (double)minPercentcellCanPlayDisplay;
- (void)stopVideoIfSupport;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(_Bool)arg2;
- (struct CGRect)convertFocusRectToView:(UIView *)arg1;
@end

