//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderProfilePreloadCGIInfo : NSObject
{
    unsigned long long _start;
    unsigned long long _end;
    NSString *_name;
    long long _errorCode;
}

- (void).cxx_destruct;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
- (id)reportJson;

@end

