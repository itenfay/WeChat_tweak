//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BrandLiveWeAppData, NSData, NSString;

@interface BrandFinderLiveInfo : NSObject
{
    _Bool _useWeapp;
    unsigned int _lastRefreshTime;
    unsigned int _refreshInterval;
    unsigned int _liveSquareScene;
    NSString *_username;
    NSString *_finderFeedExportId;
    NSString *_lastEndFeedExportedId;
    NSString *_liveSquareTitle;
    NSString *_coverUrl;
    BrandLiveWeAppData *_weAppData;
    NSString *_finderSessionBuffer;
    NSData *_dataBuffer;
}

+ (id)fromRespLiveInfo:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_weAppData;
+ (void)PBArrayAdd_useWeapp;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_liveSquareScene;
+ (void)PBArrayAdd_liveSquareTitle;
+ (void)PBArrayAdd_lastEndFeedExportedId;
+ (void)PBArrayAdd_refreshInterval;
+ (void)PBArrayAdd_lastRefreshTime;
+ (void)PBArrayAdd_finderFeedExportId;
+ (void)PBArrayAdd_username;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(retain, nonatomic) NSString *finderSessionBuffer; // @synthesize finderSessionBuffer=_finderSessionBuffer;
@property(retain, nonatomic) BrandLiveWeAppData *weAppData; // @synthesize weAppData=_weAppData;
@property(nonatomic) _Bool useWeapp; // @synthesize useWeapp=_useWeapp;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) unsigned int liveSquareScene; // @synthesize liveSquareScene=_liveSquareScene;
@property(copy, nonatomic) NSString *liveSquareTitle; // @synthesize liveSquareTitle=_liveSquareTitle;
@property(copy, nonatomic) NSString *lastEndFeedExportedId; // @synthesize lastEndFeedExportedId=_lastEndFeedExportedId;
@property(nonatomic) unsigned int refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) unsigned int lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(copy, nonatomic) NSString *finderFeedExportId; // @synthesize finderFeedExportId=_finderFeedExportId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy) NSString *description;
- (_Bool)isLiving;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;
- (id)toBizServiceFinderLiveInfo;
- (id)toBizFinderLiveInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

