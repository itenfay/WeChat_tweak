//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterLatestGameInfo
{
    _Bool _isSubscribed;
    unsigned long long _downloadType;
}

+ (void)initialize;
+ (void)PBArrayAdd_downloadType;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

