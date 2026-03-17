//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIColor, UIView;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderJumpInfoViewBaseDelegate <NSObject>
- (UIColor *)backgroundColorOfJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;

@optional
- (void)finderJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (void)finderJumpInfoView:(UIView<WCFinderJumpInfoViewProtocol> *)arg1 changeToShow:(_Bool)arg2 animated:(_Bool)arg3;
@end

