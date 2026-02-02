//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderJumpInfo, WCFinderSearchEventRequestParams;

@interface WCFinderJSAPIPostOptionalParams : NSObject
{
    _Bool _presentAnimated;
    _Bool _syncPostLoading;
    _Bool _forbidSaveDraft;
    WCFinderSearchEventRequestParams *_finderEventInfo;
    NSString *_generalReportInfo;
    NSString *_extParamsJsonString;
    NSString *_mediaDescription;
    NSString *_postBtnTitle;
    WCFinderJumpInfo *_postJumpInfo;
    NSString *_clientKVReportInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clientKVReportInfo; // @synthesize clientKVReportInfo=_clientKVReportInfo;
@property(nonatomic) _Bool forbidSaveDraft; // @synthesize forbidSaveDraft=_forbidSaveDraft;
@property(nonatomic) _Bool syncPostLoading; // @synthesize syncPostLoading=_syncPostLoading;
@property(retain, nonatomic) WCFinderJumpInfo *postJumpInfo; // @synthesize postJumpInfo=_postJumpInfo;
@property(copy, nonatomic) NSString *postBtnTitle; // @synthesize postBtnTitle=_postBtnTitle;
@property(copy, nonatomic) NSString *mediaDescription; // @synthesize mediaDescription=_mediaDescription;
@property(copy, nonatomic) NSString *extParamsJsonString; // @synthesize extParamsJsonString=_extParamsJsonString;
@property(copy, nonatomic) NSString *generalReportInfo; // @synthesize generalReportInfo=_generalReportInfo;
@property(retain, nonatomic) WCFinderSearchEventRequestParams *finderEventInfo; // @synthesize finderEventInfo=_finderEventInfo;
@property(nonatomic) _Bool presentAnimated; // @synthesize presentAnimated=_presentAnimated;
- (id)initWithJSONString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (id)toJsonStr;

@end

