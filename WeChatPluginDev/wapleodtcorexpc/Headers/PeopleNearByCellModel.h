//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PeopleNearByCellModel : NSObject
{
    long long _type;
    id _data;
}

+ (id)modelWithType:(long long)arg1 data:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

