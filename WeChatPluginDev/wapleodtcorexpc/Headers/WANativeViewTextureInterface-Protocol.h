//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WANativeViewPointerEvent;

@protocol WANativeViewTextureInterface <NSObject>
@property(nonatomic) _Bool haveNewNativeViewTexture;
- (long long)getNativeViewContentMode;
- (unsigned long long)getNativeViewTextureRotation;
- (struct __CVBuffer *)getNativeViewTexture;
- (void)initNativeViewTexture;

@optional
- (void)handleNativeViewPointerEvent:(WANativeViewPointerEvent *)arg1;
@end

