//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderPostNetResourceAssist : NSObject
{
    NSString *_tid;
    CDUnknownBlockType _resolver;
}

+ (id)getPostApplyLocalVideoUrlByMediaInfo:(id)arg1;
+ (id)netVideoFetchPromise:(id)arg1 cancelToken:(id)arg2;
+ (id)netImageExistedPath:(id)arg1 downloadView:(id)arg2 downloadOptions:(long long)arg3;
+ (id)resolveHttpURL:(id)arg1 format:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (id)initWithDataItemTid:(id)arg1 resolver:(CDUnknownBlockType)arg2;

@end

