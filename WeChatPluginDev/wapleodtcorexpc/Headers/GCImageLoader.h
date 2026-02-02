//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GCImageLoader : NSObject
{
    CDUnknownBlockType _completionBlock;
    GCImageLoader *_selfRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCImageLoader *selfRef; // @synthesize selfRef=_selfRef;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (void)completeWithImage:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)loadImageUrl:(id)arg1 withComplectionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

