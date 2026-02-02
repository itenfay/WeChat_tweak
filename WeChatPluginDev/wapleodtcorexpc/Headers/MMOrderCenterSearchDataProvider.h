//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMOrderCenterSearchDataProvider : NSObject
{
    _Bool _newSearch;
    _Bool _hasMoreOrders;
    unsigned int _offset;
    NSString *_keyword;
    NSString *_filteringAppId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool hasMoreOrders; // @synthesize hasMoreOrders=_hasMoreOrders;
@property(nonatomic) _Bool newSearch; // @synthesize newSearch=_newSearch;
@property(retain, nonatomic) NSString *filteringAppId; // @synthesize filteringAppId=_filteringAppId;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)noDataPrompt;
- (void)getReplacementOrdersAtPositionalIndex:(unsigned long long)arg1 withAttachedIndex:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)getOrdersWithSuccessBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 forceRefresh:(_Bool)arg3;
- (id)initWithKeyword:(id)arg1 filteringAppId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

