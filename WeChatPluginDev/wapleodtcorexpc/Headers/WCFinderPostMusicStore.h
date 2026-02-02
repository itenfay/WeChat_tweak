//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostMusicStore : NSObject
{
}

+ (void)showTypePicker:(long long)arg1 onView:(id)arg2 complete:(CDUnknownBlockType)arg3;
+ (void)showChatFilePicker:(CDUnknownBlockType)arg1 params:(id)arg2 limiter:(id)arg3 fromVC:(id)arg4;
+ (void)showFilePicker:(CDUnknownBlockType)arg1 limiter:(id)arg2 fromVC:(id)arg3;
+ (void)showFeedPicker:(CDUnknownBlockType)arg1 limiter:(id)arg2 fromVC:(id)arg3;
+ (void)showPicker:(long long)arg1 limiter:(id)arg2 chatParams:(id)arg3 fromVC:(id)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)functionName;
+ (long long)errCodeForLimitType:(long long)arg1;
- (id)handle:(id)arg1 storeIns:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

