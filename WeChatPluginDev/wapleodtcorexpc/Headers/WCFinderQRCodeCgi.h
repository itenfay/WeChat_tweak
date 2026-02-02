//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCFinderQRCodeCgiDelegate;

@interface WCFinderQRCodeCgi
{
    id <WCFinderQRCodeCgiDelegate> _delegate;
    NSString *_username;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <WCFinderQRCodeCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

