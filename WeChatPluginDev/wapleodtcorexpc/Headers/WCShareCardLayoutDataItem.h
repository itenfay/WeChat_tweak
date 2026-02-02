//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCShareCardLayoutDataItem
{
    unsigned int _layoutEndTime;
    unsigned int _top;
    NSString *_cardTpId;
    NSString *_announceMent;
}

+ (void)initialize;
+ (void)PBArrayAdd_layoutEndTime;
+ (void)PBArrayAdd_announceMent;
+ (void)PBArrayAdd_cardTpId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int top; // @synthesize top=_top;
@property(nonatomic) unsigned int layoutEndTime; // @synthesize layoutEndTime=_layoutEndTime;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent=_announceMent;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

