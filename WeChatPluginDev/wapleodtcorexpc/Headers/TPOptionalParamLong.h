//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPOptionalParamLong : NSObject
{
    unsigned long long _key;
    long long _value;
    long long _param1;
    long long _param2;
}

@property(nonatomic) long long param2; // @synthesize param2=_param2;
@property(nonatomic) long long param1; // @synthesize param1=_param1;
@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;

@end

