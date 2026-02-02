//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TingFinderActionPlugin : NSObject
{
}

- (id)genAsyncResult:(long long)arg1 errMsg:(id)arg2;
- (void)onFinderFeedLikeFeedId:(id)arg1 nonceId:(id)arg2 actToLike:(_Bool)arg3 realName:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

