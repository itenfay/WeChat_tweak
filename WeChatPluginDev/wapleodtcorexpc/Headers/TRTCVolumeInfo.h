//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCVolumeInfo : NSObject
{
    NSString *_userId;
    unsigned long long _volume;
    long long _vad;
}

- (void).cxx_destruct;
@property(nonatomic) long long vad; // @synthesize vad=_vad;
@property(nonatomic) unsigned long long volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

