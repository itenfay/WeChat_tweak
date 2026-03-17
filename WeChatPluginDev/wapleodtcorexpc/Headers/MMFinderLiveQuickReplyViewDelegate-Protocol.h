//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveQuickReplyModel;

@protocol MMFinderLiveQuickReplyViewDelegate <NSObject>
- (void)collectionViewDidSelectEndInput;
- (void)collectionViewDidSelectWithModel:(MMFinderLiveQuickReplyModel *)arg1;
@end

