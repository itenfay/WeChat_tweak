//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayBalanceMenuInfo : NSObject
{
    _Bool _is_show_menu;
    NSArray *_balance_menu_item;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_balance_menu_item;
+ (void)PBArrayAdd_is_show_menu;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *balance_menu_item; // @synthesize balance_menu_item=_balance_menu_item;
@property(nonatomic) _Bool is_show_menu; // @synthesize is_show_menu=_is_show_menu;
- (void)genFromDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

