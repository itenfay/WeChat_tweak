//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderKeepHolderTaskContext
{
    double _playedPosition;
    NSString *_nonceId;
}

+ (void)initialize;
+ (void)PBArrayAdd_nonceId;
+ (void)PBArrayAdd_playedPosition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(nonatomic) double playedPosition; // @synthesize playedPosition=_playedPosition;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

