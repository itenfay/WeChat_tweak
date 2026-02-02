//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface DeviceRankUserProfile
{
    NSString *_nsUsername;
    NSString *_nsCoverUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsCoverUrl;
+ (void)PBArrayAdd_nsUsername;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsCoverUrl; // @synthesize nsCoverUrl=_nsCoverUrl;
@property(retain, nonatomic) NSString *nsUsername; // @synthesize nsUsername=_nsUsername;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

