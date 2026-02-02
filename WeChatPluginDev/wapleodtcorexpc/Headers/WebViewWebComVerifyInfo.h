//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebViewWebComVerifyInfo
{
    unsigned int _taskReportId;
    unsigned int _taskJsCtxReportId;
    NSString *_name;
    NSString *_resCdnUrl;
    NSString *_resMd5;
    NSString *_webComptConfigJson;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *webComptConfigJson; // @synthesize webComptConfigJson=_webComptConfigJson;
@property(nonatomic) unsigned int taskJsCtxReportId; // @synthesize taskJsCtxReportId=_taskJsCtxReportId;
@property(nonatomic) unsigned int taskReportId; // @synthesize taskReportId=_taskReportId;
@property(copy, nonatomic) NSString *resMd5; // @synthesize resMd5=_resMd5;
@property(copy, nonatomic) NSString *resCdnUrl; // @synthesize resCdnUrl=_resCdnUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;

@end

