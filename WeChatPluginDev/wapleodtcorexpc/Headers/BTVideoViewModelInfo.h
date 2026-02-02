//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;
@protocol BTItemCellViewModelVideoPlayProtocol;

@interface BTVideoViewModelInfo
{
    _Bool _isDragging;
    _Bool _isScrolling;
    _Bool _isWifiOrDawang;
    id <BTItemCellViewModelVideoPlayProtocol> _curFocusItemCellViewModelVideoPlay;
    NSArray *_exposureItemList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *exposureItemList; // @synthesize exposureItemList=_exposureItemList;
@property(retain, nonatomic) id <BTItemCellViewModelVideoPlayProtocol> curFocusItemCellViewModelVideoPlay; // @synthesize curFocusItemCellViewModelVideoPlay=_curFocusItemCellViewModelVideoPlay;
@property(nonatomic) _Bool isWifiOrDawang; // @synthesize isWifiOrDawang=_isWifiOrDawang;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
- (id)findExposureItemWithIndexPath:(id)arg1;

@end

