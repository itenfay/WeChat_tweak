//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface _YYCGImage : NSObject
{
    struct CGImage *_CGImage;
}

+ (id)imageWithCGImage:(struct CGImage *)arg1;
@property(nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

