//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ResultRect : NSObject
{
    struct CGPoint _leftTop;
    struct CGPoint _rightTop;
    struct CGPoint _rightBottom;
    struct CGPoint _leftBottom;
}

@property(nonatomic) struct CGPoint leftBottom; // @synthesize leftBottom=_leftBottom;
@property(nonatomic) struct CGPoint rightBottom; // @synthesize rightBottom=_rightBottom;
@property(nonatomic) struct CGPoint rightTop; // @synthesize rightTop=_rightTop;
@property(nonatomic) struct CGPoint leftTop; // @synthesize leftTop=_leftTop;
- (_Bool)standardPassport;
- (_Bool)standardRectangle;

@end

