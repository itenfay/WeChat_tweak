//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLRUCacheItem : NSObject
{
    id _data;
    unsigned long long _cost;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (id)description;
- (id)initWithData:(id)arg1 cost:(unsigned long long)arg2;

@end

