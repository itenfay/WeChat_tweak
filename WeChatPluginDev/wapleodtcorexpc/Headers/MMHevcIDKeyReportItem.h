//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMHevcIDKeyReportItem : NSObject
{
    unsigned int _ID;
    unsigned int _value;
    unsigned long long _key;
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(nonatomic) unsigned long long key; // @synthesize key=_key;
@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
- (id)init:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;

@end

