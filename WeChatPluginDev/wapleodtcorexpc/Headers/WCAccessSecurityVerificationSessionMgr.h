//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCAccessSecurityVerificationSessionMgr : NSObject
{
    _Bool _isInSession;
    _Bool _isVerified;
    WCDataItem *_securityVerificationDataItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, nonatomic) WCDataItem *securityVerificationDataItem; // @synthesize securityVerificationDataItem=_securityVerificationDataItem;
@property(readonly, nonatomic) _Bool isInSession; // @synthesize isInSession=_isInSession;
- (_Bool)isSecurityVerifiedInSessionForDataItem:(id)arg1;
- (void)updateFailDataItemForSpamAsPassSecurityVerification;
- (_Bool)isDataItemInSession:(id)arg1;
- (void)endSessionWithDataItem:(id)arg1;
- (void)startSessionWithDataItem:(id)arg1;

@end

