//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol EnterpriseSearchDataControllerDelegate;

@interface EnterpriseSearchDataController : NSObject
{
    id <EnterpriseSearchDataControllerDelegate> _delegate;
    NSMutableDictionary *_dicLocalContact;
    NSMutableDictionary *_dicLocalGroup;
    NSMutableDictionary *_dicLocalApplication;
    NSMutableDictionary *_dicRemoteContactResult;
    NSString *_brandUserName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *brandUserName; // @synthesize brandUserName=_brandUserName;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBizChatContactSearchResp:(id)arg1;
- (_Bool)makeBizChatContactSearchReq:(id)arg1 offset:(unsigned int)arg2;
- (void)clearSearchResult;
- (_Bool)remoteSearchMoreWithKeyword:(id)arg1 range:(unsigned int)arg2 error:(_Bool *)arg3;
- (id)remoteSearchResultWithKeyword:(id)arg1 range:(unsigned int)arg2;
- (id)localSearchWithKeyword:(id)arg1 range:(unsigned int)arg2;
- (void)initData;
- (id)initWithBrandUserName:(id)arg1 delegate:(id)arg2;

@end

