//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WCFinderGlobalFrequencyClickInfo;
@protocol WCFinderGlobalRedDotFrequencyReportHelperDelegate;

@interface WCFinderGlobalRedDotFrequencyReportHelper : NSObject
{
    id <WCFinderGlobalRedDotFrequencyReportHelperDelegate> _delegate;
    NSMutableDictionary *_reportDic;
    WCFinderGlobalFrequencyClickInfo *_lastClickEntryInfo;
    unsigned long long _willAppearFindPageTimeStamp;
    unsigned long long _willDisappearFindPageTimeStamp;
    long long _enterBackgroundTimeStamp;
}

+ (long long)convertCalcReasonType:(long long)arg1;
+ (id)getRedDotPathFromFindPageIdx:(long long)arg1;
+ (long long)getLastTabTypeFromPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) long long enterBackgroundTimeStamp; // @synthesize enterBackgroundTimeStamp=_enterBackgroundTimeStamp;
@property(nonatomic) unsigned long long willDisappearFindPageTimeStamp; // @synthesize willDisappearFindPageTimeStamp=_willDisappearFindPageTimeStamp;
@property(nonatomic) unsigned long long willAppearFindPageTimeStamp; // @synthesize willAppearFindPageTimeStamp=_willAppearFindPageTimeStamp;
@property(retain, nonatomic) WCFinderGlobalFrequencyClickInfo *lastClickEntryInfo; // @synthesize lastClickEntryInfo=_lastClickEntryInfo;
@property(retain, nonatomic) NSMutableDictionary *reportDic; // @synthesize reportDic=_reportDic;
@property(nonatomic) __weak id <WCFinderGlobalRedDotFrequencyReportHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)triggerReportByClickBusiness:(_Bool)arg1 reasonType:(long long)arg2 shouldReset:(_Bool)arg3;
- (void)updateTargetClickActionCleanTypeAtPath:(id)arg1 businessType:(unsigned long long)arg2 cleanAccType:(long long)arg3;
- (void)targetRedDotPathExpose:(id)arg1;
- (void)markReportData;
- (void)updateEntryRedDotInfoWhenWillDisappear;
- (void)updateEntryRedDotInfoWhenWillExpose;
- (_Bool)clickFromBusiness;
- (void)resetReportDicInfo;
- (void)loadFindPageEntryKeyDic;
- (void)updateReportCurrentInfoAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)triggerReportAbortActionAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)updateClickActionInfoAtIdx:(long long)arg1 withRedDot:(_Bool)arg2;
- (long long)getCurrentTabTypeFromPath:(id)arg1;
- (unsigned long long)getBusinessTypeAtPath:(id)arg1 lastTabType:(long long)arg2;
- (void)addMultiEntryPath:(id)arg1;
- (void)addSingleEntryPath:(id)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)addObserverForForegroundNotification;
- (void)dealloc;
- (id)init;

@end

