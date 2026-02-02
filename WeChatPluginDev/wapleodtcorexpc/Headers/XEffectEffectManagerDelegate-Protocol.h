//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class XEffectEffectManager, XEffectPixelBuffer;

@protocol XEffectEffectManagerDelegate <NSObject>

@optional
- (void)effectManager:(XEffectEffectManager *)arg1 didOutputPixelBuffer:(XEffectPixelBuffer *)arg2 frameTime:(CDStruct_1b6d18a9)arg3;
- (void)effectManager:(XEffectEffectManager *)arg1 didOutputPixelBuffer:(XEffectPixelBuffer *)arg2;
@end

