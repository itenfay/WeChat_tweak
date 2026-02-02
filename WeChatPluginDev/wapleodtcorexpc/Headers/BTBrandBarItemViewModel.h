//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTBaseBarItemView, CContact, NSString;

@interface BTBrandBarItemViewModel : NSObject
{
    _Bool _hasLine;
    _Bool _isLiveForcePreposed;
    NSString *_username;
    NSString *_nickName;
    BTBaseBarItemView *_barItemView;
    CContact *_contact;
}

+ (id)itemViewClassName;
- (void).cxx_destruct;
@property(nonatomic) _Bool isLiveForcePreposed; // @synthesize isLiveForcePreposed=_isLiveForcePreposed;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(nonatomic) __weak BTBaseBarItemView *barItemView; // @synthesize barItemView=_barItemView;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
@property(readonly, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void)onUpdateOftenReadContactByOpenLive:(id)arg1;
- (void)onUpdateOftenReadContactByEnterFinderMember:(id)arg1;
- (void)onUpdateOftenReadContactByExposeFlowListItemCellWithUserName:(id)arg1;
- (void)onUpdateOftenReadContactByEnterProfile:(id)arg1;
- (void)onUpdateOftenReadContactByEnterSession:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (id)contactData;
@property(readonly, nonatomic) _Bool isMember;
@property(readonly, nonatomic) _Bool isFinder;
@property(readonly, nonatomic) _Bool hasArrow;
@property(readonly, nonatomic) unsigned long long greenDotType;
@property(readonly, nonatomic) _Bool isBrandLiving;
@property(readonly, nonatomic) _Bool hasNewFinderLiving;
@property(readonly, nonatomic) _Bool hasGreenDot;
@property(readonly, nonatomic) _Bool hasNewMemberContent;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *headImgUrl;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

