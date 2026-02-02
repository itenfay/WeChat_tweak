//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPOptionalParamString : NSObject
{
    unsigned long long _key;
    NSString *_value;
    NSString *_param1;
    NSString *_param2;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *param2; // @synthesize param2=_param2;
@property(copy, nonatomic) NSString *param1; // @synthesize param1=_param1;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;

@end

