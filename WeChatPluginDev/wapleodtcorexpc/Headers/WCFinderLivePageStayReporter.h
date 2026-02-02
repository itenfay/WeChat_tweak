//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WCFinderLivePageStayReporter : NSObject
{
    unsigned long long _enterPageTime;
    NSString *_refPageId;
    NSMutableDictionary *_switchExtraDic;
}

+ (void)reportMoreLiveFollowFoldAction:(unsigned long long)arg1 commentScene:(id)arg2 tabType:(unsigned int)arg3 subTabType:(unsigned int)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *switchExtraDic; // @synthesize switchExtraDic=_switchExtraDic;
@property(retain, nonatomic) NSString *refPageId; // @synthesize refPageId=_refPageId;
@property(nonatomic) unsigned long long enterPageTime; // @synthesize enterPageTime=_enterPageTime;
- (void)cleanReportTabData;
- (void)reportPageStayQuitExpose:(id)arg1 tabType:(unsigned int)arg2 subTabType:(unsigned int)arg3 commentScene:(id)arg4 pageUdfKv:(id)arg5;
- (void)reportPageStayEnterExpose:(id)arg1 tabType:(unsigned int)arg2 subTabType:(unsigned int)arg3 commentScene:(id)arg4 pageUdfKv:(id)arg5;
- (void)updateEnterPageTime;
- (void)updateRefPageId:(id)arg1;
- (void)setupData;
- (id)init;

@end

