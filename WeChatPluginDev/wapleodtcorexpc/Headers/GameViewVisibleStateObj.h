//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameViewVisibleStateObj : NSObject
{
    _Bool _visible;
    unsigned long long _timestamp;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;

@end

