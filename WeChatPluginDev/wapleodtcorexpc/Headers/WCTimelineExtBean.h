//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SnsExtSpamInfoMsg, SnsExtStatData, WCMomentsInputAreaReportInfo, WCTimelineInputAction;

@interface WCTimelineExtBean : NSObject
{
    _Bool _isTigerEnabled;
    WCTimelineInputAction *_inputAction;
    SnsExtStatData *_snsExtStatData;
    NSMutableArray *_uploadResponseRetCodeArr;
    SnsExtSpamInfoMsg *_snsExtSpamInfo;
    long long _springContentStyle;
    WCMomentsInputAreaReportInfo *_inputAreaReportInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_snsExtSpamInfo;
+ (void)PBArrayAdd_springContentStyle;
+ (void)PBArrayAdd_isTigerEnabled;
+ (void)PBArrayAdd_uploadResponseRetCodeArr;
+ (void)PBArrayAdd_snsExtStatData;
+ (void)PBArrayAdd_inputAction;
- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsInputAreaReportInfo *inputAreaReportInfo; // @synthesize inputAreaReportInfo=_inputAreaReportInfo;
@property(nonatomic) _Bool isTigerEnabled; // @synthesize isTigerEnabled=_isTigerEnabled;
@property(nonatomic) long long springContentStyle; // @synthesize springContentStyle=_springContentStyle;
@property(retain, nonatomic) SnsExtSpamInfoMsg *snsExtSpamInfo; // @synthesize snsExtSpamInfo=_snsExtSpamInfo;
@property(retain, nonatomic) NSMutableArray *uploadResponseRetCodeArr; // @synthesize uploadResponseRetCodeArr=_uploadResponseRetCodeArr;
@property(retain, nonatomic) SnsExtStatData *snsExtStatData; // @synthesize snsExtStatData=_snsExtStatData;
@property(retain, nonatomic) WCTimelineInputAction *inputAction; // @synthesize inputAction=_inputAction;
- (id)ensureSnsExtSpamInfo;
- (id)ensureUploadResponseRetCodeArr;
- (id)ensureSnsExtStatData;
- (id)ensureInputAction;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

