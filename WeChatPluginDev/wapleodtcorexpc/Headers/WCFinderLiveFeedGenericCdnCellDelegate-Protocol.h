//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLiveFeedGenericCdnCell;

@protocol WCFinderLiveFeedGenericCdnCellDelegate <NSObject>

@optional
- (void)onBaseLiveCellForwardAction:(WCFinderLiveFeedGenericCdnCell *)arg1;
- (void)onPlayStateChanged:(WCFinderLiveFeedGenericCdnCell *)arg1 state:(unsigned long long)arg2;
@end

