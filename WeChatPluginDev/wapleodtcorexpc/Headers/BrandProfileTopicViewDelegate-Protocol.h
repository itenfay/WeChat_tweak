//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileTopicInfo;

@protocol BrandProfileTopicViewDelegate <NSObject>
- (void)onUnfoldButtonClicked;
- (void)onTopicButtonClicked:(BrandProfileTopicInfo *)arg1;
@end

