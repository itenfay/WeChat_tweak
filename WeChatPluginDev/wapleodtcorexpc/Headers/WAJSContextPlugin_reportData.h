//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol IReportMiniProgramDelegate;

@interface WAJSContextPlugin_reportData
{
    id <IReportMiniProgramDelegate> _webDelegate;
    id <IReportMiniProgramDelegate> _weappDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IReportMiniProgramDelegate> weappDelegate; // @synthesize weappDelegate=_weappDelegate;
@property(nonatomic) __weak id <IReportMiniProgramDelegate> webDelegate; // @synthesize webDelegate=_webDelegate;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)getMiniProgramReportId;
- (void)reportMiniProgramPageData:(id)arg1 pageRoute:(id)arg2 isUserReport:(_Bool)arg3;

@end

