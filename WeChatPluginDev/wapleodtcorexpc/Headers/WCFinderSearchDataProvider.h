//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderSearchHotWord, WCFinderSearchKVReporter, WCFinderSearchMetaData;
@protocol WCFinderSearchDataProviderDelegate;

@interface WCFinderSearchDataProvider : NSObject
{
    _Bool _continueFlag;
    _Bool _loading;
    NSString *_text;
    WCFinderSearchHotWord *_hotword;
    NSMutableArray *_contentVMS;
    NSData *_lastBuffer;
    WCFinderSearchMetaData *_metaData;
    NSData *_objHotwordInfoBuff;
    NSData *_sessionBuffer;
    WCFinderSearchKVReporter *_reporter;
    id <WCFinderSearchDataProviderDelegate> _delegate;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) __weak id <WCFinderSearchDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCFinderSearchKVReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSData *objHotwordInfoBuff; // @synthesize objHotwordInfoBuff=_objHotwordInfoBuff;
@property(retain, nonatomic) WCFinderSearchMetaData *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(retain, nonatomic) WCFinderSearchHotWord *hotword; // @synthesize hotword=_hotword;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)reportSearchSuccess:(_Bool)arg1 requestId:(id)arg2;
- (id)queryParams;
- (void)requestPageDatas;
- (id)initWithReqeustId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

