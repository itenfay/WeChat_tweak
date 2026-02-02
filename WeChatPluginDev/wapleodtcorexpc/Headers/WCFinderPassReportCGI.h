//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderPassReportCGI
{
    int _passReportScene;
    NSString *_reportData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) int passReportScene; // @synthesize passReportScene=_passReportScene;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithPassReportScene:(int)arg1 reportData:(id)arg2;

@end

