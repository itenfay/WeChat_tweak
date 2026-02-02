//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCRedEnvelopesRewardInfo : NSObject
{
    unsigned int _resoureId;
    unsigned int _reportId;
    unsigned int _reportKey;
    NSMutableArray *_arrRewardItem;
}

+ (void)initialize;
+ (void)PBArrayAdd_reportKey;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_arrRewardItem;
+ (void)PBArrayAdd_resoureId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrRewardItem; // @synthesize arrRewardItem=_arrRewardItem;
@property(nonatomic) unsigned int reportKey; // @synthesize reportKey=_reportKey;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(nonatomic) unsigned int resoureId; // @synthesize resoureId=_resoureId;
- (_Bool)hasRewardForMe;
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

