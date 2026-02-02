//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderFeedFlowViewReportParams : NSObject
{
    _Bool _forbidReport;
    NSString *_pageTag;
    NSString *_groudId;
    unsigned long long _musicType;
    NSString *_eventId;
    unsigned long long _eventSortType;
    NSDictionary *_eventInfo;
    NSDictionary *_udfKV;
    unsigned long long _markReadScene;
    unsigned long long _markReadSubScene;
    unsigned long long _cellExposeReportRate;
    NSDictionary *_liveChnlExtra;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *liveChnlExtra; // @synthesize liveChnlExtra=_liveChnlExtra;
@property(nonatomic) _Bool forbidReport; // @synthesize forbidReport=_forbidReport;
@property(nonatomic) unsigned long long cellExposeReportRate; // @synthesize cellExposeReportRate=_cellExposeReportRate;
@property(nonatomic) unsigned long long markReadSubScene; // @synthesize markReadSubScene=_markReadSubScene;
@property(nonatomic) unsigned long long markReadScene; // @synthesize markReadScene=_markReadScene;
@property(retain, nonatomic) NSDictionary *udfKV; // @synthesize udfKV=_udfKV;
@property(retain, nonatomic) NSDictionary *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(nonatomic) unsigned long long eventSortType; // @synthesize eventSortType=_eventSortType;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) unsigned long long musicType; // @synthesize musicType=_musicType;
@property(copy, nonatomic) NSString *groudId; // @synthesize groudId=_groudId;
@property(copy, nonatomic) NSString *pageTag; // @synthesize pageTag=_pageTag;

@end

