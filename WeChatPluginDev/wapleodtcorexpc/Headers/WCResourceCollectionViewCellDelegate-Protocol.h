//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCResourceCollectionViewCell;

@protocol WCResourceCollectionViewCellDelegate <NSObject>
- (void)onClickCell:(WCResourceCollectionViewCell *)arg1;
- (void)onUnselectCell:(WCResourceCollectionViewCell *)arg1;
- (void)onSelectCell:(WCResourceCollectionViewCell *)arg1;
- (_Bool)isCellBeSelected:(WCResourceCollectionViewCell *)arg1;
@end

