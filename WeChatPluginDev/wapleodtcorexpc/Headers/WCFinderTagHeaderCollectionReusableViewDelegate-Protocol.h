//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIButton;

@protocol WCFinderTagHeaderCollectionReusableViewDelegate <NSObject>

@optional
- (void)onTagHeaderMoreButtonClicked;
- (void)onTagHeaderClicked:(MMUIButton *)arg1 selectedIndex:(long long)arg2;
@end

