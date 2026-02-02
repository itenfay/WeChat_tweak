//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVideoTemplate, NSArray, NSString, OMJMusicInfo, WCVideoProducerViewModel;

@protocol WCVideoProducerViewModelExt <NSObject>

@optional
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 didGetExtRecommendMusics:(NSArray *)arg2 forTemplateID:(NSString *)arg3;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeTemplateInfo:(MJVideoTemplate *)arg2 completeSuccess:(_Bool)arg3;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeTemplateInfo:(MJVideoTemplate *)arg2 progress:(double)arg3;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeTemplateWillStart:(MJVideoTemplate *)arg2;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeMusicInfo:(OMJMusicInfo *)arg2 completeSuccess:(_Bool)arg3;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeMusicInfo:(OMJMusicInfo *)arg2 progress:(double)arg3;
- (void)videoProducerViewModel:(WCVideoProducerViewModel *)arg1 changeMusicInfoWillStart:(OMJMusicInfo *)arg2;
@end

