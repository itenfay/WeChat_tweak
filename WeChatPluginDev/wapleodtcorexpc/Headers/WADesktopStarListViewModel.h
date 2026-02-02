//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppItemData;
@protocol WADesktopStarListReportDelegate;

@interface WADesktopStarListViewModel
{
    long long _moveStartIndex;
    long long _moveEndIndex;
    WAAppItemData *_itemData;
    id <WADesktopStarListReportDelegate> _reportDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WADesktopStarListReportDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
- (void)reportOnViewDidAppear;
- (void)reportItemMoveFrom:(id)arg1 fromIndex:(long long)arg2 to:(long long)arg3;
- (void)reportItemStared:(id)arg1 index:(long long)arg2;
- (void)reportItemDeleted:(id)arg1 index:(long long)arg2;
- (void)notifyEditMode:(_Bool)arg1;

@end

