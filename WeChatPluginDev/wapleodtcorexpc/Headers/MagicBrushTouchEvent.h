//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MagicBrushTouchEvent : NSObject
{
    unsigned char _changed;
    unsigned long long _timestamp;
    NSArray *_touches;
    long long _action;
}

+ (id)fromUITouch:(id)arg1 withEvent:(id)arg2 andAction:(long long)arg3 inView:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned char changed; // @synthesize changed=_changed;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)description;

@end

