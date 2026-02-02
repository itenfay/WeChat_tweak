//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface BleWriteRequestArray : NSObject
{
    NSArray *_array;
    unsigned long long _processCount;
}

- (void).cxx_destruct;
@property unsigned long long processCount; // @synthesize processCount=_processCount;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (unsigned long long)count;
- (id)firstObject;
- (id)initWithArray:(id)arg1;

@end

