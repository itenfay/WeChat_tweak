//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface GameCenterCountryInfo
{
    unsigned int _lastFetchTime;
    NSString *_productID;
    NSString *_countryCode;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastFetchTime;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_productID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

