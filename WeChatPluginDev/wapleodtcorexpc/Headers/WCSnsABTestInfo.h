//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ABTestItem, NSMutableDictionary, NSString, WCSnsABTestTipData;

@interface WCSnsABTestInfo : NSObject
{
    ABTestItem *abtestItem;
    NSString *language;
    unsigned long long experType;
    NSMutableDictionary *dicTipData;
    WCSnsABTestTipData *firstTipData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsABTestTipData *firstTipData; // @synthesize firstTipData;
@property(retain, nonatomic) NSMutableDictionary *dicTipData; // @synthesize dicTipData;
@property(nonatomic) unsigned long long experType; // @synthesize experType;
@property(retain, nonatomic) NSString *language; // @synthesize language;
@property(retain, nonatomic) ABTestItem *abtestItem; // @synthesize abtestItem;
- (id)init;

@end

