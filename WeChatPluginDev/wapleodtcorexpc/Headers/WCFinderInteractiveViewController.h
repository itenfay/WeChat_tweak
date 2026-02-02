//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderInteractiveViewController
{
    struct WCFinderInteractiveCounts _counts;
}

+ (id)createTitleWithIcon:(id)arg1 count:(long long)arg2;
- (id).cxx_construct;
@property(nonatomic) struct WCFinderInteractiveCounts counts; // @synthesize counts=_counts;
- (void)unembedChildViewController:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)onSearchClicked;
- (id)definePages;
- (void)onLimitedClicked;
- (void)updateRightBarButtonItems;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCounts:(struct WCFinderInteractiveCounts)arg1;

@end

