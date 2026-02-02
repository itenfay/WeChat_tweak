//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIViewController, WATimelineData;
@protocol IWATimelineCommitDelegate;

@protocol IWATimelineService <NSObject>
@property(nonatomic) __weak id <IWATimelineCommitDelegate> commitDelegate;
- (UIViewController *)getTimelineVCByData:(WATimelineData *)arg1;
@end

