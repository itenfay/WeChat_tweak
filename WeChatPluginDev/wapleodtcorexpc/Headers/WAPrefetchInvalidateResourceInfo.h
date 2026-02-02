//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WAPrefetchInvalidateResourceInfo
{
    NSMutableDictionary *_invalidateCodeTokens;
    NSMutableDictionary *_invalidateContactTokens;
}

+ (void)initialize;
+ (void)PBArrayAdd_invalidateContactTokens;
+ (void)PBArrayAdd_invalidateCodeTokens;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *invalidateContactTokens; // @synthesize invalidateContactTokens=_invalidateContactTokens;
@property(retain, nonatomic) NSMutableDictionary *invalidateCodeTokens; // @synthesize invalidateCodeTokens=_invalidateCodeTokens;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

