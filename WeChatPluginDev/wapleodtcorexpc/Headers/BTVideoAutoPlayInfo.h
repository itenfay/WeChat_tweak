//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BTVideoAutoPlayInfo
{
    double _lastPlayedTime;
    double _lastPlayedTimeExpiredTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastPlayedTimeExpiredTime;
+ (void)PBArrayAdd_lastPlayedTime;
@property(nonatomic) double lastPlayedTimeExpiredTime; // @synthesize lastPlayedTimeExpiredTime=_lastPlayedTimeExpiredTime;
@property(nonatomic) double lastPlayedTime; // @synthesize lastPlayedTime=_lastPlayedTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

