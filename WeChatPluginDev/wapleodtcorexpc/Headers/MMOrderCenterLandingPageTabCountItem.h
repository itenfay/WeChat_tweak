//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMOrderCenterLandingPageTabCountItem : NSObject
{
    long long _tabType;
    long long _orderCount;
}

+ (id)tabCountItemWithDtoObject:(id)arg1;
@property(nonatomic) long long orderCount; // @synthesize orderCount=_orderCount;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;

@end

