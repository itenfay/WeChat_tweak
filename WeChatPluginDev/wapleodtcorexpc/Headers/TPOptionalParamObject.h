//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPOptionalParamObject : NSObject
{
    unsigned long long _key;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;

@end

