//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCSnsABTestTitle;

@interface WCSnsABTestTipData : NSObject
{
    NSMutableArray *arrActionItem;
    NSString *tipIndex;
    int showType;
    WCSnsABTestTitle *abtestTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsABTestTitle *abtestTitle; // @synthesize abtestTitle;
@property(nonatomic) int showType; // @synthesize showType;
@property(retain, nonatomic) NSString *tipIndex; // @synthesize tipIndex;
@property(retain, nonatomic) NSMutableArray *arrActionItem; // @synthesize arrActionItem;
- (id)description;
- (long long)compareTipAscending:(id)arg1;
- (id)init;

@end

