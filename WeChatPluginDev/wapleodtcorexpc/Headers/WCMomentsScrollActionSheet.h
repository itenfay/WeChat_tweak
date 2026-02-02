//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCMomentScrollActionSheetHeaderView;

@interface WCMomentsScrollActionSheet
{
    _Bool _isShowLoadingHeader;
    NSString *_loadingHeaderTitle;
    NSMutableArray *_pendingItemsInRow0;
    NSMutableArray *_pendingItemsInRow1;
    WCMomentScrollActionSheetHeaderView *_loadingHeaderView;
}

+ (void)updateOldItem:(id)arg1 newItem:(id)arg2;
+ (struct CGSize)defaultItemSize;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentScrollActionSheetHeaderView *loadingHeaderView; // @synthesize loadingHeaderView=_loadingHeaderView;
@property(retain, nonatomic) NSMutableArray *pendingItemsInRow1; // @synthesize pendingItemsInRow1=_pendingItemsInRow1;
@property(retain, nonatomic) NSMutableArray *pendingItemsInRow0; // @synthesize pendingItemsInRow0=_pendingItemsInRow0;
@property(retain, nonatomic) NSString *loadingHeaderTitle; // @synthesize loadingHeaderTitle=_loadingHeaderTitle;
@property(nonatomic) _Bool isShowLoadingHeader; // @synthesize isShowLoadingHeader=_isShowLoadingHeader;
- (id)createItemWithTitle:(id)arg1 image:(id)arg2;
- (id)ItemInRow1WithTitle:(id)arg1;
- (id)ItemInRow0WithTitle:(id)arg1;
- (_Bool)isItemValidWithTitle:(id)arg1;
- (_Bool)containsItemInRow1WithTitle:(id)arg1;
- (_Bool)containsItemInRow0WithTitle:(id)arg1;
- (_Bool)containsItemWithTitle:(id)arg1;
- (void)commitPendingItems;
- (void)addPendingItemInRow1WithTitle:(id)arg1 svgImageName:(id)arg2 svgImageColor:(id)arg3 isEnabled:(_Bool)arg4;
- (void)addPendingItemInRow0WithTitle:(id)arg1 svgImageName:(id)arg2 svgImageColor:(id)arg3 isEnabled:(_Bool)arg4;
- (void)addPendingItemInRow1WithTitle:(id)arg1 image:(id)arg2 isEnabled:(_Bool)arg3;
- (void)addPendingItemInRow0WithTitle:(id)arg1 image:(id)arg2 isEnabled:(_Bool)arg3;
- (void)addPendingItemInRow1:(id)arg1;
- (void)addPendingItemInRow0:(id)arg1;
- (void)_initHeaderView;
- (void)_init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

