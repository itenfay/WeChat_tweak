//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface _YYCGColor : NSObject
{
    struct CGColor *_CGColor;
}

+ (id)colorWithCGColor:(struct CGColor *)arg1;
@property(nonatomic) struct CGColor *CGColor; // @synthesize CGColor=_CGColor;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

