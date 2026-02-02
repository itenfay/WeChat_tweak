//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMLiveWeakObject : NSObject
{
    unsigned int _timestamp;
    NSObject *_object;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak NSObject *object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1;

@end

