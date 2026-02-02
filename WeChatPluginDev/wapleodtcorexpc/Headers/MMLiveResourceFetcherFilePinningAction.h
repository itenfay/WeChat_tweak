//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveStorageCleanupPinningToken;

@interface MMLiveResourceFetcherFilePinningAction
{
    MMLiveStorageCleanupPinningToken *_pinningToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *pinningToken; // @synthesize pinningToken=_pinningToken;
- (void)dispatchInvocation:(CDUnknownBlockType)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

