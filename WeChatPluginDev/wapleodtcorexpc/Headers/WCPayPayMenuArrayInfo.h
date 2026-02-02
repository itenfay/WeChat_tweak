//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCPayPayMenuArrayInfo : NSObject
{
    NSMutableArray *_m_itemArray;
}

+ (id)loadFromFileWithScene:(int)arg1;
+ (void)saveFromDictionary:(id)arg1 withScene:(int)arg2;
+ (id)genFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_itemArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_itemArray; // @synthesize m_itemArray=_m_itemArray;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

