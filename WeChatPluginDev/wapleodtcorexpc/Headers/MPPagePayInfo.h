//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPPagePayInfo
{
    _Bool _isPaid;
    _Bool _isPaySubscribe;
    NSString *_friendPayCountStr;
}

+ (void)initialize;
+ (void)PBArrayAdd_friendPayCountStr;
+ (void)PBArrayAdd_isPaySubscribe;
+ (void)PBArrayAdd_isPaid;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPaySubscribe; // @synthesize isPaySubscribe=_isPaySubscribe;
@property(copy, nonatomic) NSString *friendPayCountStr; // @synthesize friendPayCountStr=_friendPayCountStr;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

