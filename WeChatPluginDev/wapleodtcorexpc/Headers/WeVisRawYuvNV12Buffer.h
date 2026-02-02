//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeVisRawYuvNV12Buffer : NSObject
{
    struct vector<unsigned char, std::allocator<unsigned char>> buffer;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)copyFromCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (char *)dataPtr;

@end

