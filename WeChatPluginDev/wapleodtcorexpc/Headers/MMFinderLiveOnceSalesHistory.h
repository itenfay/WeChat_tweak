//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate;

@interface MMFinderLiveOnceSalesHistory : NSObject
{
    unsigned long long _sales;
    NSDate *_date;
}

+ (id)nowWithSales:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long sales; // @synthesize sales=_sales;

@end

