//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QMapNetworkBaseProcessor : NSObject
{
    NSMutableDictionary *_rules;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *rules; // @synthesize rules=_rules;
- (void)onResponse:(id)arg1 error:(id)arg2 request:(id)arg3 data:(id)arg4;
- (void)onRequest:(id)arg1;
- (void)registerReportEvent:(id)arg1;
- (id)init;

@end

