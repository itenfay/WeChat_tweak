//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface WCFinderLongServiceEncodeCompletionParam : NSObject
{
    _Bool _isSkipEncode;
    _Bool _isCancel;
    NSString *_path;
    double _timeDiff;
    NSError *_error;
    unsigned long long _retryType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long retryType; // @synthesize retryType=_retryType;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double timeDiff; // @synthesize timeDiff=_timeDiff;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) _Bool isSkipEncode; // @synthesize isSkipEncode=_isSkipEncode;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;

@end

