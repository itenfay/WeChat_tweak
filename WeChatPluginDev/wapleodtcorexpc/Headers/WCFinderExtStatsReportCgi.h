//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderExtStatsReportCgi
{
    int _commentScene;
    NSString *_extraKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extraKey; // @synthesize extraKey=_extraKey;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequestWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2;
- (void)createRequestWithDataItems:(id)arg1;
- (id)initWithExtStatsReddotInfo:(id)arg1 redDotObjectId:(unsigned long long)arg2;
- (id)initWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2 commentScene:(int)arg3 extraKey:(id)arg4;
- (id)initWithDataItems:(id)arg1 commentScene:(int)arg2;

@end

