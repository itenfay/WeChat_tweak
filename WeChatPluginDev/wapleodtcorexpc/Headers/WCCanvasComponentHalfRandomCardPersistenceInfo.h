//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCCanvasComponentHalfRandomCardPersistenceInfo
{
    NSMutableDictionary *_subCardInfos;
}

+ (void)initialize;
+ (void)PBArrayAdd_subCardInfos;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *subCardInfos; // @synthesize subCardInfos=_subCardInfos;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

