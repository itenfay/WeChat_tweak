//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayGetUserExInfoCgiDelegate;

@interface WCPayGetUserExInfoCgi
{
    NSString *_scene;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPayGetUserExInfoCgiDelegate> delegate; // @dynamic delegate;

@end

