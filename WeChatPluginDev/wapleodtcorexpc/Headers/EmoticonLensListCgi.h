//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;
@protocol EmoticonLensListCgiDelegate;

@interface EmoticonLensListCgi
{
    NSString *_username;
    unsigned long long _enterTime;
    id <EmoticonLensListCgiDelegate> _delegate;
    NSData *_pageBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *pageBuff; // @synthesize pageBuff=_pageBuff;
@property(nonatomic) __weak id <EmoticonLensListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)startRequestWithPageBuffer:(id)arg1;
- (_Bool)hasNextPage;
- (void)startRequestNextPage;
- (void)startRequestFirstPage;
- (id)initWithDelegate:(id)arg1;

@end

