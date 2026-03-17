//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCElasticLayoutView;

@protocol MMSightCameraOptionProtocol <NSObject>
+ (id)new;
@property(nonatomic) _Bool active;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
- (void)rotateToOrientation:(long long)arg1;
- (id)initWithContainerFrame:(struct CGRect)arg1;
- (id)init;
@end

