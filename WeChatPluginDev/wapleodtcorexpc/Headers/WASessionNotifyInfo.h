//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface WASessionNotifyInfo : NSObject
{
    NSNumber *_globalOpenStatus;
    NSMutableDictionary *_dicCloseItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicCloseItem;
+ (void)PBArrayAdd_globalOpenStatus;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicCloseItem; // @synthesize dicCloseItem=_dicCloseItem;
@property(retain, nonatomic) NSNumber *globalOpenStatus; // @synthesize globalOpenStatus=_globalOpenStatus;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

