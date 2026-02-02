//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface WCFImageDownloadToken : NSObject
{
    _Bool _cancelled;
    id _downloadOperationCancelToken;
    NSHashTable *_downloadOperations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *downloadOperations; // @synthesize downloadOperations=_downloadOperations;
@property(nonatomic) __weak id downloadOperationCancelToken; // @synthesize downloadOperationCancelToken=_downloadOperationCancelToken;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void)cancel;
- (id)initWithOperations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

