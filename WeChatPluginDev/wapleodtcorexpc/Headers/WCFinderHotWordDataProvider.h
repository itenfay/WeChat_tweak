//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderHotWordFetchCursor, WCFinderSearchDataProvider, WCFinderSearchKVReporter, WCFinderSearchMetaData;
@protocol WCFinderSearchDataProviderDelegate;

@interface WCFinderHotWordDataProvider : NSObject
{
    id <WCFinderSearchDataProviderDelegate> _delegate;
    NSMutableArray *_contentVMS;
    WCFinderHotWordFetchCursor *_hotwordCursor;
    WCFinderSearchMetaData *_metaData;
    WCFinderSearchKVReporter *_reporter;
    WCFinderSearchDataProvider *_feedProvider;
    NSData *_objHotwordInfoBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @synthesize objHotwordInfoBuff=_objHotwordInfoBuff;
@property(retain, nonatomic) WCFinderSearchDataProvider *feedProvider; // @synthesize feedProvider=_feedProvider;
@property(retain, nonatomic) WCFinderSearchKVReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) WCFinderSearchMetaData *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) WCFinderHotWordFetchCursor *hotwordCursor; // @synthesize hotwordCursor=_hotwordCursor;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(nonatomic) __weak id <WCFinderSearchDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)positionForContentVM:(id)arg1;
- (id)hotwordForContentVM:(id)arg1;
- (id)feedProviderWithHotWord:(id)arg1;
- (_Bool)loading;
- (_Bool)continueFlag;
- (void)dataProvider:(id)arg1 removeAtIdx:(long long)arg2;
- (void)continueWithRange:(struct _NSRange)arg1;
- (void)dataProvider:(id)arg1 appendDataToRange:(struct _NSRange)arg2;
- (void)dataProviderFetchFailed:(id)arg1;
- (void)tryInsertSpliteVM:(id)arg1;
- (void)_requestNextFeedData;
- (void)requestPageDatas;
- (id)text;
- (id)initWithObjHotwordInfoBuff:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

