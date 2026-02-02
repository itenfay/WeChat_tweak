//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WAEJFontDescriptor;

@interface WAEJFontCacheKey : NSObject
{
    WAEJFontDescriptor *descriptor;
    float lineWidth;
    int normalizedContentScale;
    unsigned long long hash;
}

+ (id)keyWithDescriptor:(id)arg1 lineWidth:(float)arg2 contentScale:(float)arg3 isWgfxMode:(_Bool)arg4;
@property(readonly) int normalizedContentScale; // @synthesize normalizedContentScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

