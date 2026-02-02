//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString, UIColor;

@interface WCMomentsPrivacyItem : NSObject
{
    _Bool _isAllContactSelectedWhenInit;
    _Bool _isAllContactsSelected;
    unsigned long long _itemType;
    long long _privacy;
    NSString *_title;
    NSString *_subtitle;
    NSMutableSet *_contacts;
    NSMutableSet *_contactTags;
    UIColor *_tintColor;
    NSString *_selectContactDescription;
    NSString *_selectContactTagDescription;
    NSString *_selectAllContactsDescription;
    NSArray *_componentArray;
    NSMutableSet *_selectedContacts;
    NSMutableSet *_selectedContactTags;
}

+ (id)selectAllContactsTitle;
+ (id)selectContactTitle;
+ (id)selectTagTitle;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAllContactsSelected; // @synthesize isAllContactsSelected=_isAllContactsSelected;
@property(retain, nonatomic) NSMutableSet *selectedContactTags; // @synthesize selectedContactTags=_selectedContactTags;
@property(retain, nonatomic) NSMutableSet *selectedContacts; // @synthesize selectedContacts=_selectedContacts;
@property(retain, nonatomic) NSArray *componentArray; // @synthesize componentArray=_componentArray;
@property(copy, nonatomic) NSString *selectAllContactsDescription; // @synthesize selectAllContactsDescription=_selectAllContactsDescription;
@property(retain, nonatomic) NSString *selectContactTagDescription; // @synthesize selectContactTagDescription=_selectContactTagDescription;
@property(retain, nonatomic) NSString *selectContactDescription; // @synthesize selectContactDescription=_selectContactDescription;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) _Bool isAllContactSelectedWhenInit; // @synthesize isAllContactSelectedWhenInit=_isAllContactSelectedWhenInit;
@property(retain, nonatomic) NSMutableSet *contactTags; // @synthesize contactTags=_contactTags;
@property(retain, nonatomic) NSMutableSet *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long privacy; // @synthesize privacy=_privacy;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (id)description;
- (id)initWithItemType:(unsigned long long)arg1;
- (double)selectAllContactsCellHeightWithWidth:(double)arg1;
- (double)selectContactCellHeightWithWidth:(double)arg1;
- (double)selectTagCellHeightWithWidth:(double)arg1;
- (double)cellHeightWithWidth:(double)arg1;

@end

