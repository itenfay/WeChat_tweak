//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi;

@interface WCFinderMJSetTabDataFetcher : NSObject
{
    int _tabType;
    NSString *_templateId;
    NSMutableArray *_dataItems;
    unsigned long long _dataLoadedState;
    NSData *_lastBuff;
    WCFinderBaseCgi *_fetchCgi;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderBaseCgi *fetchCgi; // @synthesize fetchCgi=_fetchCgi;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) unsigned long long dataLoadedState; // @synthesize dataLoadedState=_dataLoadedState;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (void)requestPageData:(_Bool)arg1 commentScene:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestNextPageWithCommentScene:(int)arg1;
- (void)requestFirstPage:(CDUnknownBlockType)arg1 commentScene:(int)arg2;
- (id)init;

@end

