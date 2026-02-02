//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MJPageItem, MJSegmentViewModel, NSArray;

@interface MJComposingPagePanelViewModel
{
    NSArray *_pageItems;
    long long _selectedTabIndex;
    unsigned long long _selectedTab;
    MJPageItem *_selectedPageItem;
    MJSegmentViewModel *_entranceSegmentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJSegmentViewModel *entranceSegmentVM; // @synthesize entranceSegmentVM=_entranceSegmentVM;
@property(retain, nonatomic) MJPageItem *selectedPageItem; // @synthesize selectedPageItem=_selectedPageItem;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(retain, nonatomic) NSArray *pageItems; // @synthesize pageItems=_pageItems;
- (long long)itemIndexWithSupportedSegmentType:(unsigned long long)arg1;
- (long long)itemIndexWithEditContentType:(unsigned long long)arg1;
- (_Bool)selectTabWithIndex:(long long)arg1;
- (id)initWithPanelType:(unsigned long long)arg1 respondsToQuickExit:(_Bool)arg2 pageItems:(id)arg3 selectedTabIndex:(long long)arg4;

@end

