//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayImageMaskView;

@protocol WCPayImageMaskViewFilledDelegate <NSObject>
- (void)imageMaskView:(WCPayImageMaskView *)arg1 tapOnPoint:(struct CGPoint)arg2;
- (void)imageMaskView:(WCPayImageMaskView *)arg1 clearPercentDidChanged:(float)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
@end

