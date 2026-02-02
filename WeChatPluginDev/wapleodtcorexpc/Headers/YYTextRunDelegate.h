//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface YYTextRunDelegate : NSObject
{
    NSDictionary *_userInfo;
    double _ascent;
    double _descent;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double descent; // @synthesize descent=_descent;
@property(nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __CTRunDelegate *)CTRunDelegate;

@end

