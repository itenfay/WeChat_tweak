//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVideoCropInfo : NSObject
{
    long long _width;
    long long _height;
    long long _cropLeft;
    long long _cropRight;
    long long _cropTop;
    long long _cropBottom;
}

@property(readonly, nonatomic) long long cropBottom; // @synthesize cropBottom=_cropBottom;
@property(readonly, nonatomic) long long cropTop; // @synthesize cropTop=_cropTop;
@property(readonly, nonatomic) long long cropRight; // @synthesize cropRight=_cropRight;
@property(readonly, nonatomic) long long cropLeft; // @synthesize cropLeft=_cropLeft;
@property(readonly, nonatomic) long long height; // @synthesize height=_height;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
- (id)initWithWidth:(long long)arg1 height:(long long)arg2 cropLeft:(long long)arg3 cropRight:(long long)arg4 cropTop:(long long)arg5 cropBottom:(long long)arg6;

@end

