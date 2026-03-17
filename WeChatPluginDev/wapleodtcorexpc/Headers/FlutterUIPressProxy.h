//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIEvent, UIPress;

@interface FlutterUIPressProxy : NSObject
{
    UIPress *_press;
    UIEvent *_event;
}

@property(readonly, nonatomic) UIEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) UIPress *press; // @synthesize press=_press;
- (double)timestamp;
- (long long)type;
- (id)key;
- (long long)phase;
- (id)initWithPress:(id)arg1 withEvent:(id)arg2;

@end

