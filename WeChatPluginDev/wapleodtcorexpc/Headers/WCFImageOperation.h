//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFImageManager;
@protocol WCFImageOperation;

@interface WCFImageOperation : NSObject
{
    _Bool _cancelled;
    id <WCFImageOperation> _cacheOperation;
    id <WCFImageOperation> _loaderOperation;
    WCFImageManager *_manager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFImageManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) id <WCFImageOperation> loaderOperation; // @synthesize loaderOperation=_loaderOperation;
@property(retain, nonatomic) id <WCFImageOperation> cacheOperation; // @synthesize cacheOperation=_cacheOperation;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)reset;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

