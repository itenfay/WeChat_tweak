//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderProfileOverviewBaseSectionCtrl;

@interface WCFinderProfileOVSectionIdentifier : NSObject
{
    _Bool _showHeaderBtn;
    _Bool _showFooterBtn;
    WCFinderProfileOverviewBaseSectionCtrl *_section;
    NSString *_identifier;
    long long _secType;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showFooterBtn; // @synthesize showFooterBtn=_showFooterBtn;
@property(nonatomic) _Bool showHeaderBtn; // @synthesize showHeaderBtn=_showHeaderBtn;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) WCFinderProfileOverviewBaseSectionCtrl *section; // @synthesize section=_section;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

