//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightDraft, WCVideoProducerViewController;

@protocol WCVideoProducerViewControllerDelegate <NSObject>

@optional
- (void)videoProducerViewController:(WCVideoProducerViewController *)arg1 didCancelAfterCleanUp:(_Bool)arg2;
- (void)videoProducerViewController:(WCVideoProducerViewController *)arg1 didFinishWithSightDraft:(SightDraft *)arg2 isAsyncComposite:(_Bool)arg3;
@end

