//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UIColor;

@interface TextStateIconAppearance : NSObject
{
    unsigned int _beginTime;
    unsigned int _endTime;
    unsigned int _order;
    NSString *_iconURL;
    NSString *_bigIconURL;
    NSString *_unreadTextColorString;
    NSString *_groupId;
    unsigned long long _option;
    NSMutableDictionary *_localeToIconDescriptionDict;
    NSString *_iconDescription;
    NSMutableDictionary *_localeToClusterDescriptionDict;
    NSString *_clusterDescription;
    NSMutableDictionary *_localeToOtherClusterDescriptionDict;
    NSMutableDictionary *_localeToMyselfAloneDescriptionDict;
    NSMutableDictionary *_localeToWithMeClusterDescriptionDict;
    NSString *_otherClusterDescription;
    NSString *_myselfAloneDescription;
    NSString *_withMeClusterDescription;
    UIColor *_unreadTextColor;
}

+ (void)initialize;
+ (void)PBArrayAdd_localeToWithMeClusterDescriptionDict;
+ (void)PBArrayAdd_localeToMyselfAloneDescriptionDict;
+ (void)PBArrayAdd_unreadTextColorString;
+ (void)PBArrayAdd_bigIconURL;
+ (void)PBArrayAdd_localeToOtherClusterDescriptionDict;
+ (void)PBArrayAdd_localeToClusterDescriptionDict;
+ (void)PBArrayAdd_localeToIconDescriptionDict;
+ (void)PBArrayAdd_option;
+ (void)PBArrayAdd_order;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_iconURL;
+ (void)PBArrayAdd_endTime;
+ (void)PBArrayAdd_beginTime;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *unreadTextColor; // @synthesize unreadTextColor=_unreadTextColor;
@property(copy, nonatomic) NSString *withMeClusterDescription; // @synthesize withMeClusterDescription=_withMeClusterDescription;
@property(copy, nonatomic) NSString *myselfAloneDescription; // @synthesize myselfAloneDescription=_myselfAloneDescription;
@property(retain, nonatomic) NSString *otherClusterDescription; // @synthesize otherClusterDescription=_otherClusterDescription;
@property(retain, nonatomic) NSMutableDictionary *localeToWithMeClusterDescriptionDict; // @synthesize localeToWithMeClusterDescriptionDict=_localeToWithMeClusterDescriptionDict;
@property(retain, nonatomic) NSMutableDictionary *localeToMyselfAloneDescriptionDict; // @synthesize localeToMyselfAloneDescriptionDict=_localeToMyselfAloneDescriptionDict;
@property(retain, nonatomic) NSMutableDictionary *localeToOtherClusterDescriptionDict; // @synthesize localeToOtherClusterDescriptionDict=_localeToOtherClusterDescriptionDict;
@property(retain, nonatomic) NSString *clusterDescription; // @synthesize clusterDescription=_clusterDescription;
@property(retain, nonatomic) NSMutableDictionary *localeToClusterDescriptionDict; // @synthesize localeToClusterDescriptionDict=_localeToClusterDescriptionDict;
@property(retain, nonatomic) NSString *iconDescription; // @synthesize iconDescription=_iconDescription;
@property(retain, nonatomic) NSMutableDictionary *localeToIconDescriptionDict; // @synthesize localeToIconDescriptionDict=_localeToIconDescriptionDict;
@property(nonatomic) unsigned long long option; // @synthesize option=_option;
@property(nonatomic) unsigned int order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *unreadTextColorString; // @synthesize unreadTextColorString=_unreadTextColorString;
@property(retain, nonatomic) NSString *bigIconURL; // @synthesize bigIconURL=_bigIconURL;
@property(retain, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) unsigned int endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned int beginTime; // @synthesize beginTime=_beginTime;
- (void)clearCachedDescription;
- (id)getLocalizedDescriptionFromDict:(id)arg1 entity:(id)arg2;
- (_Bool)isQualifiedForPublish;
- (_Bool)isQualifiedForShow;
- (id)action;
- (id)initWithAction:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

