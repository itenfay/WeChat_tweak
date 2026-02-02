//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VideoMonoServiceObj : NSObject
{
    _Bool _isPaused;
    unsigned long long _monoServiceBusinessType;
    unsigned long long _subBusinessType;
    NSString *_monoServiceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *monoServiceId; // @synthesize monoServiceId=_monoServiceId;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) unsigned long long subBusinessType; // @synthesize subBusinessType=_subBusinessType;
@property(nonatomic) unsigned long long monoServiceBusinessType; // @synthesize monoServiceBusinessType=_monoServiceBusinessType;

@end

