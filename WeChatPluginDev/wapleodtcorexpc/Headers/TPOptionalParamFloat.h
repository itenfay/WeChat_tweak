//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPOptionalParamFloat : NSObject
{
    float _value;
    float _param1;
    float _param2;
    unsigned long long _key;
}

@property(nonatomic) float param2; // @synthesize param2=_param2;
@property(nonatomic) float param1; // @synthesize param1=_param1;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;

@end

