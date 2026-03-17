//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStreamFooterView;

@protocol WCFinderStreamFooterViewActionDelegate <NSObject>

@optional
- (void)clickNoMoreDataNavToRecBtn:(WCFinderStreamFooterView *)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(WCFinderStreamFooterView *)arg1;
- (_Bool)isEnableStreamFooterTrigerLoading:(WCFinderStreamFooterView *)arg1;
- (void)didClickStreamFooterRefresh:(WCFinderStreamFooterView *)arg1;
@end

