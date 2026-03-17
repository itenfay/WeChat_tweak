//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGoodsItem, MMFinderLiveGoodsSelectionPanel;

@protocol MMFinderLiveGoodsSelectionPanelDelegate <NSObject>
- (void)onGoodsSelectionPanelClosed:(MMFinderLiveGoodsSelectionPanel *)arg1 openFromSrc:(long long)arg2;
- (void)onSelectGoodsItem:(MMFinderLiveGoodsItem *)arg1;
@end

