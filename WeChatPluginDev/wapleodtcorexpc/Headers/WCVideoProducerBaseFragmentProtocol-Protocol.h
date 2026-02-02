//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCVideoProducerBaseFragmentProtocol <NSObject>
+ (id)new;
- (void)dismissFragmentAnimated:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (void)showFragmentAnimated:(_Bool)arg1 withCompletion:(void (^)(void))arg2;
- (double)getFragmentVisibleHeight;
- (double)getFragmentHeight;
- (_Bool)isShowing;
- (struct CGRect)getContainerFrame;
- (void)updateContainerFrame:(struct CGRect)arg1;
- (id)initWithContainerFrame:(struct CGRect)arg1;
- (id)init;
@end

