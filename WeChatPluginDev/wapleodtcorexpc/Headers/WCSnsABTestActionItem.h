//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCSnsABTestTitle;

@interface WCSnsABTestActionItem : NSObject
{
    NSString *showTitleFormat;
    _Bool hasUserNameKey;
    _Bool hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *richTextKey;
    WCSnsABTestTitle *abtestTitle;
    int actionType;
    NSString *actionIndex;
    NSString *jumpUrl;
    NSString *nextTipIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsABTestTitle *abtestTitle; // @synthesize abtestTitle;
@property(retain, nonatomic) NSString *nextTipIndex; // @synthesize nextTipIndex;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *actionIndex; // @synthesize actionIndex;
@property(nonatomic) int actionType; // @synthesize actionType;
- (long long)compareActionItemAscending:(id)arg1;
- (id)description;
- (id)init;

@end

