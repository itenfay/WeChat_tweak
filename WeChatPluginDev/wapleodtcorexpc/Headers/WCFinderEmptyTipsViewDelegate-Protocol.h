//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderEmptyTipsView;

@protocol WCFinderEmptyTipsViewDelegate <NSObject>
- (void)finderEmptyTipsView:(WCFinderEmptyTipsView *)arg1 didClickOnState:(unsigned long long)arg2;

@optional
- (void)finderEmptyTipsView:(WCFinderEmptyTipsView *)arg1 didClickLink:(NSString *)arg2;
@end

