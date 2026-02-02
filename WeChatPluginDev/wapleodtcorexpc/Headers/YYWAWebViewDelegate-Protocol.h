//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIScrollView, UIView, WAContainerView;

@protocol YYWAWebViewDelegate <NSObject>
- (void)onTongCengChangedScrollView:(UIScrollView *)arg1;
- (WAContainerView *)getContainerViewFromNative:(UIView *)arg1;
- (_Bool)isDisableContextMenuText:(UIView *)arg1;
- (_Bool)isSelectableText:(UIView *)arg1;
@end

