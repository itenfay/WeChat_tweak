//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIHalfScreenViewControllerDelegate-Protocol.h"

@class CEmoticonWrap, NSArray;

@protocol RelatedEmoticonHalfScreenViewControllerDelegate <MMUIHalfScreenViewControllerDelegate>

@optional
- (void)onRelatedEmoticonViewControllerSendEmoticon:(CEmoticonWrap *)arg1;
- (NSArray *)getRecommendMessageContexts;
@end

