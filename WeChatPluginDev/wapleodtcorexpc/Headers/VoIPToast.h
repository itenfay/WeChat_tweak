//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoIPToast : NSObject
{
    _Bool _hasShowedBefore;
    _Bool _isDiff;
    NSString *_string;
    double _remainTime;
    unsigned long long _type;
    unsigned long long _startTime;
}

+ (id)constructVoIPToast:(id)arg1 delta:(double)arg2 type:(unsigned long long)arg3;
+ (id)constructVoIPToast:(id)arg1 delta:(double)arg2 type:(unsigned long long)arg3 isDiff:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDiff; // @synthesize isDiff=_isDiff;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool hasShowedBefore; // @synthesize hasShowedBefore=_hasShowedBefore;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;

@end

