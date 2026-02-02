//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WCFinderAdReportInfo : NSObject
{
    _Bool _hasReportAction;
    NSString *_expReportLink;
    NSString *_clkReportLink;
    NSMutableDictionary *_reportInfo;
    NSMutableDictionary *_clickPosMap;
    NSString *_feedbackUrl;
    unsigned long long _originExposeTimeStamp;
    unsigned long long _viewableExposeTimeStamp;
    NSMutableArray *_feedbackInfoArray;
    unsigned long long _lastReportActionTimeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReportActionTimeStamp; // @synthesize lastReportActionTimeStamp=_lastReportActionTimeStamp;
@property(nonatomic) _Bool hasReportAction; // @synthesize hasReportAction=_hasReportAction;
@property(retain, nonatomic) NSMutableArray *feedbackInfoArray; // @synthesize feedbackInfoArray=_feedbackInfoArray;
@property(nonatomic) unsigned long long viewableExposeTimeStamp; // @synthesize viewableExposeTimeStamp=_viewableExposeTimeStamp;
@property(nonatomic) unsigned long long originExposeTimeStamp; // @synthesize originExposeTimeStamp=_originExposeTimeStamp;
@property(copy, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(retain, nonatomic) NSMutableDictionary *clickPosMap; // @synthesize clickPosMap=_clickPosMap;
@property(retain, nonatomic) NSMutableDictionary *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(copy, nonatomic) NSString *clkReportLink; // @synthesize clkReportLink=_clkReportLink;
@property(copy, nonatomic) NSString *expReportLink; // @synthesize expReportLink=_expReportLink;
- (void)initFuncParamsWithAdEntryView:(id)arg1 onPosition:(unsigned long long)arg2;
- (id)initWithAdEntryView:(id)arg1 onPosition:(unsigned long long)arg2;

@end

