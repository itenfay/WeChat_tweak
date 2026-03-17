//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCDragToCloseDelegate-Protocol.h"

@protocol PageScrollViewDelegate <WCDragToCloseDelegate>
- (void)onChangedWithCurrentIndex:(long long)arg1;

@optional
- (void)onFullScreenItemDidDragToRect:(struct CGRect)arg1;
- (void)onDoubleClicked;
- (void)onSingleClicked;
@end

