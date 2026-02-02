//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderUserPageSectionQAInfo;

@interface WCFinderProfileQAPageModel
{
    FinderUserPageSectionQAInfo *_qaInfo;
}

+ (id)overviewSectionTypes;
+ (int)tabId;
@property(retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo; // @synthesize qaInfo=_qaInfo;
- (void)requestPageData;
- (void)_updateQAOverviewSection;
- (id)displayName;
- (id)viewPageClassName;
- (_Bool)shouldDisplayTab;

@end

