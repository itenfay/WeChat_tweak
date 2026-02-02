//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOfflinePayConfirmRequestStruct : NSObject
{
    NSString *m_nsMessageID;
    int m_enWCPayOfflinePayConfirmRequestButtonType;
    NSString *m_nsPasswd;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsPasswd; // @synthesize m_nsPasswd;
@property(retain, nonatomic) NSString *m_nsMessageID; // @synthesize m_nsMessageID;
@property(nonatomic) int m_enWCPayOfflinePayConfirmRequestButtonType; // @synthesize m_enWCPayOfflinePayConfirmRequestButtonType;

@end

