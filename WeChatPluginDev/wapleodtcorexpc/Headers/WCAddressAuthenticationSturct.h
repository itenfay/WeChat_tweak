//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAddressAuthenticationSturct : NSObject
{
    NSString *m_nsHandleUrl;
    NSString *m_appID;
    int m_uiPayRcptScene;
}

- (void).cxx_destruct;
@property(nonatomic) int m_uiPayRcptScene; // @synthesize m_uiPayRcptScene;
@property(retain, nonatomic) NSString *m_nsHandleUrl; // @synthesize m_nsHandleUrl;
@property(retain, nonatomic) NSString *m_appID; // @synthesize m_appID;

@end

