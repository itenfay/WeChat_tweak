//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, WCFinderRedDotCtrlInfo, WCFinderRedDotTipsShowInfo;

@interface WSTabRedDotInfo : NSObject
{
    long long _category;
    WCFinderRedDotCtrlInfo *_contentRedDotCtrlInfo;
    WCFinderRedDotTipsShowInfo *_contentRedDotShowInfo;
    WCFinderRedDotCtrlInfo *_numRedDotCtrlInfo;
    WCFinderRedDotTipsShowInfo *_numRedDotShowInfo;
    NSNumber *_numRedDotCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *numRedDotCount; // @synthesize numRedDotCount=_numRedDotCount;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *numRedDotShowInfo; // @synthesize numRedDotShowInfo=_numRedDotShowInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *numRedDotCtrlInfo; // @synthesize numRedDotCtrlInfo=_numRedDotCtrlInfo;
@property(retain, nonatomic) WCFinderRedDotTipsShowInfo *contentRedDotShowInfo; // @synthesize contentRedDotShowInfo=_contentRedDotShowInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *contentRedDotCtrlInfo; // @synthesize contentRedDotCtrlInfo=_contentRedDotCtrlInfo;
@property(nonatomic) long long category; // @synthesize category=_category;
- (id)checkToReturnNumRedDotReportString;
- (id)checkToReturnContentRedDotReportString;
- (id)checkToReturnNumRedDotReportInfo;
- (id)checkToReturnContentRedDotReportInfo;
- (id)getNumRedDotReportParams;
- (id)getContentRedDotReportParams;
- (id)description;
- (id)init;

@end

