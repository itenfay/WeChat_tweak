//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface FLTImgPositionInfo : NSObject
{
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_offsetX;
    NSNumber *_offsetY;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithWidth:(id)arg1 height:(id)arg2 offsetX:(id)arg3 offsetY:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSNumber *offsetX; // @synthesize offsetX=_offsetX;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
- (id)toList;

@end

