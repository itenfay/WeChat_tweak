//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayBindNewCardSwitch : NSObject
{
    long long _forbid_bind_card;
    NSString *_forbid_word;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_forbid_word;
+ (void)PBArrayAdd_forbid_bind_card;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *forbid_word; // @synthesize forbid_word=_forbid_word;
@property(nonatomic) long long forbid_bind_card; // @synthesize forbid_bind_card=_forbid_bind_card;
- (void)genFromDic:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

