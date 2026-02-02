//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayBeforeTransferCgiDelegate;

@interface WCPayBeforeTransferCgi
{
    NSString *_username;
    NSString *_groupUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupUsername; // @synthesize groupUsername=_groupUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayBeforeTransferCgiDelegate> delegate; // @dynamic delegate;

@end

