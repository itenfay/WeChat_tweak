//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSnsMenuItem
{
    unsigned int _menuActionType;
    unsigned int _alertActionType;
    NSString *_title;
    NSString *_alertWording;
}

+ (void)initialize;
+ (void)PBArrayAdd_alertActionType;
+ (void)PBArrayAdd_alertWording;
+ (void)PBArrayAdd_menuActionType;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) unsigned int alertActionType; // @synthesize alertActionType=_alertActionType;
@property(retain, nonatomic) NSString *alertWording; // @synthesize alertWording=_alertWording;
@property(nonatomic) unsigned int menuActionType; // @synthesize menuActionType=_menuActionType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValidForShow;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

