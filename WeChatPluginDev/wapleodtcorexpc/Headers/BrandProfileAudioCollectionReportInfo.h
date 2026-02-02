//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BrandProfileAudioCollectionReportInfo : NSObject
{
    unsigned long long _proto;
    NSString *_viewId;
    CDUnknownBlockType _viewReportParamsBlock;
    long long _pageId;
    NSString *_pageName;
    NSDictionary *_pageReportParams;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *pageReportParams; // @synthesize pageReportParams=_pageReportParams;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) CDUnknownBlockType viewReportParamsBlock; // @synthesize viewReportParamsBlock=_viewReportParamsBlock;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(nonatomic) unsigned long long proto; // @synthesize proto=_proto;
- (struct SDKReportInfo)toSDKReportInfo;

@end

