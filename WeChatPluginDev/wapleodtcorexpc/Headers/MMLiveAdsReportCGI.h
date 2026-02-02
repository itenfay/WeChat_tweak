//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveAdReportRequest, NSString;

@interface MMLiveAdsReportCGI
{
    int _scene;
    unsigned long long _objectId;
    unsigned long long _liveId;
    NSString *_reportData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithObjId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 scene:(int)arg3 reportData:(id)arg4;
- (id)description;

// Remaining properties
@property(retain, nonatomic) FinderLiveAdReportRequest *request;

@end

