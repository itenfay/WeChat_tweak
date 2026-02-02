//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCImageSearchReportModel;

@interface WebSearchPlugin_ImageSearch
{
    WCImageSearchReportModel *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCImageSearchReportModel *reporter; // @synthesize reporter=_reporter;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;

@end

