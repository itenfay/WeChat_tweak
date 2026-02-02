//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MJPageViewItemProtocol <NSObject>
- (void)reloadData;

@optional
- (void)invalidateLayout;
- (void)changeCursorProgress:(double)arg1;
- (void)changeSelectedFrom:(long long)arg1 to:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(_Bool)arg2;
@end

