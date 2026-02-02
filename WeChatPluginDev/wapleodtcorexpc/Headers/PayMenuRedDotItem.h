//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface PayMenuRedDotItem : NSObject
{
    unsigned int _expireTime;
    NSString *_itemName;
    NSString *_wording;
}

+ (void)initialize;
+ (void)PBArrayAdd_wording;
+ (void)PBArrayAdd_expireTime;
+ (void)PBArrayAdd_itemName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
- (void)copyFrom:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

