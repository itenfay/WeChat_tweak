//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CXCall, CXCallObserver;

@protocol CXCallObserverDelegate <NSObject>
- (void)callObserver:(CXCallObserver *)arg1 callChanged:(CXCall *)arg2;
@end

