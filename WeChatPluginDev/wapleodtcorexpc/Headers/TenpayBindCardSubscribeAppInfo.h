//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TenpayBindCardSubscribeAppInfo : NSObject
{
    _Bool m_bIsSubscribe;
    NSString *m_nsUserName;
    NSString *m_nsNickName;
    NSString *m_nsRecommandDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsRecommandDesc; // @synthesize m_nsRecommandDesc;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(nonatomic) _Bool m_bIsSubscribe; // @synthesize m_bIsSubscribe;

@end

