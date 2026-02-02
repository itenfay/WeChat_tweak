//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TingRedDotServiceCpp
{
}

+ (id)sharedInstance;
- (void)clearRedDotItemFromScene:(int)arg1 scene:(int)arg2;
- (id)getRedDotItem:(int)arg1;
- (void)clearCenterRedDotItemWithParams:(id)arg1;
- (void)clearCenterRedDotItem;
- (id)getCenterRedDotItem;
- (void)requestRedDotItem:(id)arg1 version:(int)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

