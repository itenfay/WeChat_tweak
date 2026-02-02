//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol WCFinderRedDotExposeModelDelegate;

@interface WCFinderRedDotExposeModel : NSObject
{
    _Bool _isBanAsUseBusiness;
    id <WCFinderRedDotExposeModelDelegate> _delegate;
    NSString *_path;
    unsigned long long _businessType;
    NSMutableArray *_exposeTimeStampArray;
    NSMutableArray *_banTimeStampArray;
    long long _accRedDotExpStartTime;
}

+ (_Bool)isAllTimestampsToday:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_accRedDotExpStartTime;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_banTimeStampArray;
+ (void)PBArrayAdd_exposeTimeStampArray;
+ (void)PBArrayAdd_path;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBanAsUseBusiness; // @synthesize isBanAsUseBusiness=_isBanAsUseBusiness;
@property(nonatomic) long long accRedDotExpStartTime; // @synthesize accRedDotExpStartTime=_accRedDotExpStartTime;
@property(retain, nonatomic) NSMutableArray *banTimeStampArray; // @synthesize banTimeStampArray=_banTimeStampArray;
@property(retain, nonatomic) NSMutableArray *exposeTimeStampArray; // @synthesize exposeTimeStampArray=_exposeTimeStampArray;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) __weak id <WCFinderRedDotExposeModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetCalacCountAtReason:(long long)arg1;
- (void)resetBanCalacCount;
- (void)removeBanCountArray;
- (void)increaseBanCount;
- (void)increaseExposeCount;
- (long long)banCount;
- (long long)exposeCount;
- (id)getTargetKey;
- (id)initWithRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

