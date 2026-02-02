//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesInfo : NSObject
{
    _Bool _hasReward;
    _Bool _bFree;
    NSString *_sendId;
}

+ (void)initialize;
+ (void)PBArrayAdd_bFree;
+ (void)PBArrayAdd_hasReward;
+ (void)PBArrayAdd_sendId;
- (void).cxx_destruct;
@property(nonatomic) _Bool bFree; // @synthesize bFree=_bFree;
@property(nonatomic) _Bool hasReward; // @synthesize hasReward=_hasReward;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId=_sendId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

