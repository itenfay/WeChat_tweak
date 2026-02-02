//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSURL;
@protocol APAccessDelegate;

@interface APAccess
{
    NSURL *_thirdPartyUrl;
    id <APAccessDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <APAccessDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *thirdPartyUrl; // @synthesize thirdPartyUrl=_thirdPartyUrl;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didFail;
- (void)didSuccess;
- (void)cancel;
- (void)start;
- (id)initWithSsid:(id)arg1 mac:(id)arg2 thirdPartyUrl:(id)arg3 delegate:(id)arg4;
- (void)dealloc;

@end

