//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TPOptionalParamQueueInt : NSObject
{
    unsigned long long _key;
    NSArray *_value;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;

@end

