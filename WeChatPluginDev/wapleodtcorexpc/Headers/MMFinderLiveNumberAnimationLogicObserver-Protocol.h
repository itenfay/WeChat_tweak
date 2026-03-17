//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveNumberAnimationLogic;

@protocol MMFinderLiveNumberAnimationLogicObserver <NSObject>
- (void)changeNumberWithLogic:(MMFinderLiveNumberAnimationLogic *)arg1;

@optional
- (void)finishWithLogic:(MMFinderLiveNumberAnimationLogic *)arg1;
@end

