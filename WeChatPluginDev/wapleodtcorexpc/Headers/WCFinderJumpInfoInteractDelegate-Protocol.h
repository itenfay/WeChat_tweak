//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoInteractDelegate <NSObject>
- (void)jumpInfoViewDidTapHotZone:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 area:(unsigned long long)arg2;
- (void)jumpInfoViewDidTapHotZone:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
@end

