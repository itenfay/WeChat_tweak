//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EJExternalTouch : NSObject
{
    int _touchId;
    double _x;
    double _y;
}

@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) int touchId; // @synthesize touchId=_touchId;

@end

