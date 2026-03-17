//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKSize : NSObject
{
    float _width;
    float _height;
}

+ (id)KSizeWithWidth:(float)arg1 height:(float)arg2;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
- (id)description;
- (id)initWithWidth:(float)arg1 height:(float)arg2;

@end

