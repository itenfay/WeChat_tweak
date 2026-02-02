//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFilePickLimiter : NSObject
{
    long long _minDurationLimit;
    NSString *_minDurationToast;
    long long _maxDurationLimit;
    NSString *_maxDurationToast;
    long long _maxFileSizeLimit;
    NSString *_maxFileSizeToast;
    unsigned long long _forbidenMediaType;
    NSString *_forbidenMediaTypeToast;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *forbidenMediaTypeToast; // @synthesize forbidenMediaTypeToast=_forbidenMediaTypeToast;
@property(nonatomic) unsigned long long forbidenMediaType; // @synthesize forbidenMediaType=_forbidenMediaType;
@property(retain, nonatomic) NSString *maxFileSizeToast; // @synthesize maxFileSizeToast=_maxFileSizeToast;
@property(nonatomic) long long maxFileSizeLimit; // @synthesize maxFileSizeLimit=_maxFileSizeLimit;
@property(retain, nonatomic) NSString *maxDurationToast; // @synthesize maxDurationToast=_maxDurationToast;
@property(nonatomic) long long maxDurationLimit; // @synthesize maxDurationLimit=_maxDurationLimit;
@property(retain, nonatomic) NSString *minDurationToast; // @synthesize minDurationToast=_minDurationToast;
@property(nonatomic) long long minDurationLimit; // @synthesize minDurationLimit=_minDurationLimit;
- (long long)limitTypeForDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (id)_showToastDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (id)showToastReturnWordingDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (_Bool)showToastDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (_Bool)testDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;

@end

