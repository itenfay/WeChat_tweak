//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class CIImage, TAVKeyframeValueParam;

@protocol TAVKeyframeValue <NSObject, NSCopying>
+ (CIImage *)applyEffectToSourceImage:(CIImage *)arg1 param:(TAVKeyframeValueParam *)arg2;
@end

