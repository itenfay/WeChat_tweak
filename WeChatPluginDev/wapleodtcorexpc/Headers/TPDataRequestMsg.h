//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPDataRequestMsg : NSObject
{
    int _sequence;
    long long _start;
    long long _end;
    NSString *_fileName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) long long end; // @synthesize end=_end;
@property(nonatomic) long long start; // @synthesize start=_start;
- (id)description;
- (id)initWithStart:(long long)arg1 end:(long long)arg2;

@end

