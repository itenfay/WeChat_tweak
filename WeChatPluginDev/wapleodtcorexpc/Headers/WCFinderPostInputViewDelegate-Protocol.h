//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderTopicInfo, WCFinderPostInputView, WCFinderUpdateTopicModel;

@protocol WCFinderPostInputViewDelegate <NSObject>

@optional
- (void)postInputViewClickTopic:(FinderTopicInfo *)arg1 inputTextTopicModel:(WCFinderUpdateTopicModel *)arg2;
- (void)postInputViewClickExpressionBtn:(WCFinderPostInputView *)arg1;
@end

