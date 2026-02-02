//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMallBroadCastInfo : NSObject
{
    NSString *m_nsTitle;
    NSString *m_nsIconUrl;
    NSString *m_nsJumpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsJumpUrl; // @synthesize m_nsJumpUrl;
@property(retain, nonatomic) NSString *m_nsIconUrl; // @synthesize m_nsIconUrl;

@end

