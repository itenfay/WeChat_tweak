//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBaseJsApiHandler : NSObject
{
    CDUnknownBlockType _callbackBlock;
    NSString *_systemInfoJsonStr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *systemInfoJsonStr; // @synthesize systemInfoJsonStr=_systemInfoJsonStr;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)callbackWithId:(id)arg1 params:(id)arg2;
- (void)onResponseBizCommReportCgi:(id)arg1;
- (void)addApi_getSystemInfo:(id)arg1;
- (void)addApi_reportCgi:(id)arg1;
- (void)addApi_getPlatform:(id)arg1;
- (void)addApi_userAgent:(id)arg1;
- (void)addApi_idkeyListReport:(id)arg1;
- (void)addApi_idkeyReport:(id)arg1;
- (void)addApi_kvReport:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1 systemInfoJson:(id)arg2;
- (void)dealloc;

@end

