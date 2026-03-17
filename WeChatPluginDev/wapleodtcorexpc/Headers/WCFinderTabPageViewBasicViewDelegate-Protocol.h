//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol WCFinderTabPageViewBasicProtocol;

@protocol WCFinderTabPageViewBasicViewDelegate <NSObject>
- (void)finderTabPageView:(UIView<WCFinderTabPageViewBasicProtocol> *)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(_Bool)arg3;

@optional
- (void)finderTabPageView:(UIView<WCFinderTabPageViewBasicProtocol> *)arg1 didSelectFilterAtIndex:(unsigned long long)arg2;
@end

