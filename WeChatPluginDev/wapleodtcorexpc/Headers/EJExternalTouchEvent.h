//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface EJExternalTouchEvent : NSObject
{
    unsigned char _length;
    unsigned char _changed;
    unsigned long long _timestamp;
    NSArray *_touches;
    long long _action;
}

@property(nonatomic) unsigned char changed; // @synthesize changed=_changed;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) unsigned char length; // @synthesize length=_length;
@property(retain, nonatomic) NSArray *touches; // @synthesize touches=_touches;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

