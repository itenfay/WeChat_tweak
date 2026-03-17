//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayGPSvrConfigCache : NSObject
{
    _Bool _showSolitaireEntry;
    unsigned int _aaMaxTotalNum;
    unsigned int _aaMaxPayerNum;
    unsigned int _aaMaxReceiverNum;
    unsigned int _aaDefaultMod;
    unsigned long long _aaMaxTotalAmount;
    unsigned long long _aaMaxPerAmount;
}

+ (void)initialize;
+ (void)PBArrayAdd_showSolitaireEntry;
+ (void)PBArrayAdd_aaDefaultMod;
+ (void)PBArrayAdd_aaMaxReceiverNum;
+ (void)PBArrayAdd_aaMaxPayerNum;
+ (void)PBArrayAdd_aaMaxPerAmount;
+ (void)PBArrayAdd_aaMaxTotalAmount;
+ (void)PBArrayAdd_aaMaxTotalNum;
@property(nonatomic) _Bool showSolitaireEntry; // @synthesize showSolitaireEntry=_showSolitaireEntry;
@property(nonatomic) unsigned int aaDefaultMod; // @synthesize aaDefaultMod=_aaDefaultMod;
@property(nonatomic) unsigned int aaMaxReceiverNum; // @synthesize aaMaxReceiverNum=_aaMaxReceiverNum;
@property(nonatomic) unsigned int aaMaxPayerNum; // @synthesize aaMaxPayerNum=_aaMaxPayerNum;
@property(nonatomic) unsigned long long aaMaxPerAmount; // @synthesize aaMaxPerAmount=_aaMaxPerAmount;
@property(nonatomic) unsigned long long aaMaxTotalAmount; // @synthesize aaMaxTotalAmount=_aaMaxTotalAmount;
@property(nonatomic) unsigned int aaMaxTotalNum; // @synthesize aaMaxTotalNum=_aaMaxTotalNum;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

