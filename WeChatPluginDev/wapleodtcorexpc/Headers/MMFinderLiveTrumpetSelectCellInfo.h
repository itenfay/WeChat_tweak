//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MMFinderLiveTrumpetSelectCellInfo : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_headerImageURL;
    NSNumber *_accountType;
    NSNumber *_privacyType;
    NSNumber *_selectedAccountType;
    NSNumber *_selectedPrivacyType;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *selectedPrivacyType; // @synthesize selectedPrivacyType=_selectedPrivacyType;
@property(retain, nonatomic) NSNumber *selectedAccountType; // @synthesize selectedAccountType=_selectedAccountType;
@property(retain, nonatomic) NSNumber *privacyType; // @synthesize privacyType=_privacyType;
@property(retain, nonatomic) NSNumber *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool isPrivacy;
@property(readonly, nonatomic) _Bool isCreation;
@property(readonly, nonatomic) _Bool isAccount;

@end

