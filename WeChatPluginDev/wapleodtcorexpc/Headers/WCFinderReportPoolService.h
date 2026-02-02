//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderEditVideoReportInfo;

@interface WCFinderReportPoolService
{
    NSString *_clickPostTimeStamp;
    WCFinderEditVideoReportInfo *_editReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderEditVideoReportInfo *editReportInfo; // @synthesize editReportInfo=_editReportInfo;
@property(copy, nonatomic) NSString *clickPostTimeStamp; // @synthesize clickPostTimeStamp=_clickPostTimeStamp;
- (void)clearEditVideoReportInfo;
- (_Bool)hasEditVideoReportInfo;
- (id)editVideoCompostTimeStr;
- (void)setEditVideoCompostTime:(double)arg1;
- (id)editVideoFileName;
- (void)setEditVideoFileName:(id)arg1;
- (void)resetClickPostTimeStamp;
- (id)getClickPostTimeStamp;
- (void)updateClickPostTimeStamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

