//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableSet, NSString;

@interface MMWebMenuWhiteListFliter
{
    NSMutableSet *_setAllowMenuItems;
}

+ (id)baseFunctionMenuFliter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *setAllowMenuItems; // @synthesize setAllowMenuItems=_setAllowMenuItems;
- (_Bool)isMenuItemFliteredToHide:(id)arg1;
- (void)appendAllowBaseMenuItem:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

