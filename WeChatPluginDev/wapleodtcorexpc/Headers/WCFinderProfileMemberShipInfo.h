//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderProfileMemberShipInfo : NSObject
{
    _Bool _isBlocked;
    NSString *_title;
    NSString *_summary;
    NSString *_iconName;
    UIColor *_iconColor;
    unsigned long long _memberShipStatus;
    unsigned long long _visitorStatus;
}

+ (id)formatIconColor:(unsigned long long)arg1;
+ (id)formatIconName:(unsigned long long)arg1;
+ (id)formatSummaryTitle:(id)arg1;
+ (id)fromMemberShipResponse:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_isBlocked;
+ (void)PBArrayAdd_visitorStatus;
+ (void)PBArrayAdd_memberShipStatus;
+ (void)PBArrayAdd_iconName;
+ (void)PBArrayAdd_summary;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) unsigned long long visitorStatus; // @synthesize visitorStatus=_visitorStatus;
@property(nonatomic) unsigned long long memberShipStatus; // @synthesize memberShipStatus=_memberShipStatus;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isEqualToMemberShipInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

