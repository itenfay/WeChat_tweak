//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MTLDrawable <NSObject>
@property(readonly, nonatomic) unsigned long long drawableID;
@property(readonly, nonatomic) double presentedTime;
- (void)addPresentedHandler:(void (^)(id <MTLDrawable>))arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (void)present;
@end

