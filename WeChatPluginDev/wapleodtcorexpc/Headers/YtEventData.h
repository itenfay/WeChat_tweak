//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIImage;

@interface YtEventData : NSObject
{
    CIImage *_depthFrame;
    unsigned long long _timestamp;
    struct Mat _data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) CIImage *depthFrame; // @synthesize depthFrame=_depthFrame;
@property(nonatomic) struct Mat data; // @synthesize data=_data;
- (id)initWith:(struct Mat *)arg1 withDepth:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (id)initWith:(struct Mat *)arg1 withTimestamp:(unsigned long long)arg2;

@end

