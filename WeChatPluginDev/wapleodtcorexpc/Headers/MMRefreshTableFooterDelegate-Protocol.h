//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMRefreshTableFooterView;

@protocol MMRefreshTableFooterDelegate <NSObject>
- (void)MMRefreshTableFooterDidTriggerRefresh:(MMRefreshTableFooterView *)arg1;

@optional
- (_Bool)onRefreshFooterView:(MMRefreshTableFooterView *)arg1 clickedAtState:(unsigned long long)arg2;
@end

