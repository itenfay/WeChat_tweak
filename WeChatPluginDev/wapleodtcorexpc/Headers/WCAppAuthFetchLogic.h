//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;
@protocol WCAppAuthFetchLogicDelegate;

@interface WCAppAuthFetchLogic
{
    unsigned int _nextPageFlag;
    id <WCAppAuthFetchLogicDelegate> _delegate;
    NSData *_nextPageData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int nextPageFlag; // @synthesize nextPageFlag=_nextPageFlag;
@property(retain, nonatomic) NSData *nextPageData; // @synthesize nextPageData=_nextPageData;
@property(nonatomic) __weak id <WCAppAuthFetchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleFetchResp:(id)arg1;
- (_Bool)isFetchEnd;
- (_Bool)fetchAuthenticatedApps;
- (id)initWithDelegate:(id)arg1;

@end

