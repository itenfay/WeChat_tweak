//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol FavSecurityDelegate;

@interface FavSecurityLogic
{
    NSMutableArray *_infoArray;
    unsigned int _curCheckingId;
    id <FavSecurityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavSecurityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)HandleResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)runCheck;
- (void)checkSecurity:(id)arg1;
- (void)cancelCheck:(unsigned int)arg1;
- (id)init;

@end

