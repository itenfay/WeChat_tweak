//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderAuthInfo;

@interface WCFinderAuthInfoIconView
{
    WCFinderAuthInfo *_authInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderAuthInfo *authInfo; // @synthesize authInfo=_authInfo;
- (id)accessibilityLabel;
- (void)updateIconWithAuthIconUrl:(id)arg1 authIconType:(unsigned long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateIconWithAuthInfo:(id)arg1;

@end

