//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCShaders : NSObject
{
}

+ (id)smoothMixFragment;
+ (id)smoothVerticalFragment;
+ (id)smoothHorizontalFragment;
+ (id)maskFragment;
+ (id)softBeautifyFragment;
+ (id)blendFragment;
+ (id)rgbRenderFragment;
+ (id)i420RenderFragment;
+ (id)nv12RenderFragment;
+ (id)basicFragment;
+ (id)twoInputVertex;
+ (id)smoothVerticalVertex;
+ (id)smoothHorizontalVertex;
+ (id)basicVertex;

@end

