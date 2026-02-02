//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QFoundationDataSafetyRules : NSObject
{
    NSMutableDictionary *_domainRuleMaps;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *domainRuleMaps; // @synthesize domainRuleMaps=_domainRuleMaps;
- (id)replaceOriginDomain:(id)arg1;
- (void)unregisterDomianRules:(id)arg1;
- (void)registerDomianRules:(id)arg1;
- (id)init;

@end

