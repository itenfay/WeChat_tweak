//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderARCItem : NSObject
{
    unsigned long long _listType;
    id _key;
    id _data;
    unsigned long long _cost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(retain, nonatomic) id key; // @synthesize key=_key;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
- (id)description;
- (id)initWithData:(id)arg1 cost:(unsigned long long)arg2 forKey:(id)arg3;

@end

