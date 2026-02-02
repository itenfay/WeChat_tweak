//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCompressImageConfig : NSObject
{
    unsigned long long _type;
    NSString *_resolution;
    double _defaultRate;
    double _maxSize;
    double _heightResolution;
    double _widthResolution;
}

- (void).cxx_destruct;
@property(nonatomic) double widthResolution; // @synthesize widthResolution=_widthResolution;
@property(nonatomic) double heightResolution; // @synthesize heightResolution=_heightResolution;
@property(nonatomic) double maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) double defaultRate; // @synthesize defaultRate=_defaultRate;
@property(copy, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 resolution:(id)arg2 defaultRate:(double)arg3 maxSize:(double)arg4;

@end

