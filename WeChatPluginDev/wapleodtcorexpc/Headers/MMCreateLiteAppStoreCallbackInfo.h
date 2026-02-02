//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMCreateLiteAppStoreCallbackInfo : NSObject
{
    unsigned int _time;
    unsigned int _aliveSeconds;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int aliveSeconds; // @synthesize aliveSeconds=_aliveSeconds;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;

@end

