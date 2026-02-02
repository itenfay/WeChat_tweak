//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SightDraft, WCSightVideoCompositeTask;

@protocol WCSightVideoCompositeTaskDelegate <NSObject>
- (void)sightVideoCompositeTask:(WCSightVideoCompositeTask *)arg1 didFinish:(_Bool)arg2 withSightDraft:(SightDraft *)arg3;
@end

