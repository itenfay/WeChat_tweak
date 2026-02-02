//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCCoinGetEncashPrepareInfoCgiDelegate;

@interface WCCoinGetEncashPrepareInfoCgi
{
    NSMutableArray *_businessId;
    id <WCCoinGetEncashPrepareInfoCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCoinGetEncashPrepareInfoCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *businessId; // @synthesize businessId=_businessId;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

