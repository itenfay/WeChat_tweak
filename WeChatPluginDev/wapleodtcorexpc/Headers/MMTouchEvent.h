//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTouchEvent : NSObject
{
    float _x;
    float _y;
    long long _event;
}

+ (id)TouchEventWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;
@property(readonly, nonatomic) long long event; // @synthesize event=_event;
@property(readonly, nonatomic) float y; // @synthesize y=_y;
@property(readonly, nonatomic) float x; // @synthesize x=_x;
- (id)description;
- (id)initWithX:(float)arg1 y:(float)arg2 event:(long long)arg3;

@end

