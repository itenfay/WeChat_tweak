//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportMPShortLinkSnapShotMapItem
{
    NSString *_mpShortLink;
    NSString *_snapshotCDNUrl;
    NSString *_currentPathQuery;
    NSString *_currentPageTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *currentPageTitle; // @synthesize currentPageTitle=_currentPageTitle;
@property(copy, nonatomic) NSString *currentPathQuery; // @synthesize currentPathQuery=_currentPathQuery;
@property(copy, nonatomic) NSString *snapshotCDNUrl; // @synthesize snapshotCDNUrl=_snapshotCDNUrl;
@property(copy, nonatomic) NSString *mpShortLink; // @synthesize mpShortLink=_mpShortLink;
- (id)reportString;
- (int)reportID;

@end

