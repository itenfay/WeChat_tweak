//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSequentialAction : NSObject
{
    long long _type;
    CDUnknownBlockType _block;
    double _duration;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

