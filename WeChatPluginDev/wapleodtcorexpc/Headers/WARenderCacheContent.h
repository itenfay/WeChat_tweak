//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WARenderCacheContent : NSObject
{
    NSString *_content;
    NSString *_webviewDataStr;
    NSString *_appserviceDataStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_appserviceDataStr;
+ (void)PBArrayAdd_webviewDataStr;
+ (void)PBArrayAdd_content;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appserviceDataStr; // @synthesize appserviceDataStr=_appserviceDataStr;
@property(copy, nonatomic) NSString *webviewDataStr; // @synthesize webviewDataStr=_webviewDataStr;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

