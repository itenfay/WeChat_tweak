//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCClearScheduleCgiDelegate;

@interface WCClearScheduleCgi
{
    _Bool _isRunning;
    id <WCClearScheduleCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <WCClearScheduleCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (id)init;

@end

