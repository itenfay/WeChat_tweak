//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileTopicInfo, NSArray;

@protocol BrandProfileMsgTabViewControllerDelegate <NSObject>
- (NSArray *)getTopicInfoListFromCacher;
- (void)onTopicUnfoldButtonClicked:(_Bool)arg1;
- (void)onTopicButtonClicked:(BrandProfileTopicInfo *)arg1;
@end

