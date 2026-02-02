//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMLiveMagicEngineResLoadTask : NSObject
{
    _Bool _enforceIntegrityCheck;
    NSString *_productId;
    NSString *_targetUrl;
    NSString *_fileMD5;
    NSMutableArray *_callbackList;
    unsigned long long _currLoadState;
    CDUnknownBlockType _loadStateChangeCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType loadStateChangeCallback; // @synthesize loadStateChangeCallback=_loadStateChangeCallback;
@property(nonatomic) unsigned long long currLoadState; // @synthesize currLoadState=_currLoadState;
@property(retain, nonatomic) NSMutableArray *callbackList; // @synthesize callbackList=_callbackList;
@property(nonatomic) _Bool enforceIntegrityCheck; // @synthesize enforceIntegrityCheck=_enforceIntegrityCheck;
@property(retain, nonatomic) NSString *fileMD5; // @synthesize fileMD5=_fileMD5;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (id)description;
- (void)updateLoadState:(unsigned long long)arg1;
- (void)invokeCallbacksWithResult:(unsigned long long)arg1 path:(id)arg2;
- (id)initWithProductId:(id)arg1 url:(id)arg2 md5:(id)arg3;

@end

