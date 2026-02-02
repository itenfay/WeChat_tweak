//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol WCFinderTabViewProtocol;

@protocol WCFinderTabViewDelegate <NSObject>
- (void)finderTabPageTabView:(UIView<WCFinderTabViewProtocol> *)arg1 changeToWidth:(double)arg2;
@end

