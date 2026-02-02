//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MBExtJsApiInfo : NSObject
{
    _Bool _isSync;
    _Bool _isRunOnMainThread;
    NSString *_apiName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(nonatomic) _Bool isRunOnMainThread; // @synthesize isRunOnMainThread=_isRunOnMainThread;
@property(nonatomic) _Bool isSync; // @synthesize isSync=_isSync;
- (id)init:(id)arg1 sync:(_Bool)arg2 mainThread:(_Bool)arg3;

@end

