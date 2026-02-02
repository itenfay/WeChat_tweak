//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WAFloatingVideoDelegate <NSObject>
- (long long)getFloatingPlayerViewType;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onFloatingVideoViewClosed;
- (void)onFloatingVideoViewClicked;
@end

