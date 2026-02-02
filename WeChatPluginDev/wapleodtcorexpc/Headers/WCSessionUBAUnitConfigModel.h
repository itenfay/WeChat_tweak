//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCSessionUBAUnitConfigModel
{
    NSString *_pageName;
    NSMutableArray *_businessParams;
}

+ (void)initialize;
+ (void)PBArrayAdd_businessParams;
+ (void)PBArrayAdd_pageName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *businessParams; // @synthesize businessParams=_businessParams;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (id)toString;
- (id)initWithPageName:(id)arg1;
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

