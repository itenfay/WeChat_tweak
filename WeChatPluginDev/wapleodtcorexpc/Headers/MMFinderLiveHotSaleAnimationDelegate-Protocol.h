//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMFinderLiveHotSaleAnimationDelegate <NSObject>
- (_Bool)hasAnimationResource;
- (void)finishHotSaleAnimation:(void (^)(void))arg1;
- (void)updateHotSaleAnimation:(unsigned long long)arg1 completion:(void (^)(void))arg2;
- (void)startHotSaleAnimation:(unsigned long long)arg1 completion:(void (^)(void))arg2;
@end

