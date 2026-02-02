//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderSearchSecurityTips, WCFinderSearchFeedInfoSession, WCFinderSearchFeedTabGroupSession;

@interface WCFinderSearchViewSection : NSObject
{
    long long _type;
    FinderSearchSecurityTips *_securityTips;
    WCFinderSearchFeedInfoSession *_infoSession;
    WCFinderSearchFeedTabGroupSession *_feedTabGroup;
    long long _displayCountLimit;
}

+ (id)sectionWithFeedGroup:(id)arg1;
+ (id)sectionWithSectionInfos:(id)arg1;
+ (id)sectionWithSecurityTips:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long displayCountLimit; // @synthesize displayCountLimit=_displayCountLimit;
@property(retain, nonatomic) WCFinderSearchFeedTabGroupSession *feedTabGroup; // @synthesize feedTabGroup=_feedTabGroup;
@property(retain, nonatomic) WCFinderSearchFeedInfoSession *infoSession; // @synthesize infoSession=_infoSession;
@property(retain, nonatomic) FinderSearchSecurityTips *securityTips; // @synthesize securityTips=_securityTips;
@property(nonatomic) long long type; // @synthesize type=_type;
- (long long)rowNumberOfSection;
- (id)init;

@end

