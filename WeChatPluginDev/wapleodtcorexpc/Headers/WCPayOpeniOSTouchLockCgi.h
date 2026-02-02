//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayOpeniOSTouchLockCgiDelegate;

@interface WCPayOpeniOSTouchLockCgi
{
    NSString *_usertoken;
    NSString *_model;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *usertoken; // @synthesize usertoken=_usertoken;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayOpeniOSTouchLockCgiDelegate> delegate; // @dynamic delegate;

@end

