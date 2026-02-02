//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class RSHeadImageView;

@protocol RSHeadImageViewDelegate <NSObject>

@optional
- (void)onStatusViewHidden:(RSHeadImageView *)arg1;
- (void)onRSHeadImageClicked:(RSHeadImageView *)arg1;
@end

