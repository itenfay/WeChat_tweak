//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OpenLiteAppInfo;

@interface MMCreateLiteAppCallbackInfo : NSObject
{
    _Bool _isLoading;
    OpenLiteAppInfo *_openInfo;
    CDUnknownBlockType _callback;
    unsigned long long _time;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) OpenLiteAppInfo *openInfo; // @synthesize openInfo=_openInfo;

@end

