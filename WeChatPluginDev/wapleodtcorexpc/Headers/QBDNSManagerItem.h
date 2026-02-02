//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface QBDNSManagerItem : NSObject
{
    int _status;
    NSArray *_records;
    long long _err;
    NSDate *_badDate;
    NSDate *_emptyDate;
}

@property(retain) NSDate *emptyDate; // @synthesize emptyDate=_emptyDate;
@property(retain) NSDate *badDate; // @synthesize badDate=_badDate;
@property long long err; // @synthesize err=_err;
@property int status; // @synthesize status=_status;
@property(retain) NSArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

