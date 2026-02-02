//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCAudioVolumeEvaluateParams : NSObject
{
    _Bool _enableVadDetection;
    unsigned long long _interval;
}

@property(nonatomic) _Bool enableVadDetection; // @synthesize enableVadDetection=_enableVadDetection;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

