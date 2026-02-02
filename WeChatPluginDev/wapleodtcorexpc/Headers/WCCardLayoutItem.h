//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCardLayoutItem
{
    unsigned int _layoutEndTime;
    unsigned int _itemType;
    NSString *_cardID;
    NSString *_announceMent;
    NSString *_labelWording;
}

+ (void)initialize;
+ (void)PBArrayAdd_itemType;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_cardID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *labelWording; // @synthesize labelWording=_labelWording;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned int layoutEndTime; // @synthesize layoutEndTime=_layoutEndTime;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent=_announceMent;
@property(retain, nonatomic) NSString *cardID; // @synthesize cardID=_cardID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

