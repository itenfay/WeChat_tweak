//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UITableViewCell, UIView;

@protocol BTItemCellViewModelVideoPlayProtocol <NSObject>
- (UITableViewCell *)getCellView;
- (void)destoryVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)initVideo;
- (NSString *)autoPlayDescription;
- (_Bool)canAutoPlay;

@optional
- (struct CGRect)getVideoViewRect;
- (UIView *)getVideoContainerView;
- (UIView *)getVideoView;
- (_Bool)canAutoPlayIndenpent;
@end

