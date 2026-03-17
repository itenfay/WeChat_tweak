//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PersonalDesigner;

@interface DesignerInfoObj : NSObject
{
    unsigned long long _updateTime;
    PersonalDesigner *_designer;
}

+ (void)initialize;
+ (void)PBArrayAdd_designer;
+ (void)PBArrayAdd_updateTime;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(nonatomic) unsigned long long updateTime; // @synthesize updateTime=_updateTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

