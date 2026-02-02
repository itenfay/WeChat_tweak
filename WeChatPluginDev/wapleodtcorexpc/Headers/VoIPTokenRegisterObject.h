//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;
@protocol VoIPTokenRegisterObjectDelegate;

@interface VoIPTokenRegisterObject : NSObject
{
    NSData *m_token;
    id <VoIPTokenRegisterObjectDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VoIPTokenRegisterObjectDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) NSData *m_token; // @synthesize m_token;
- (void)callOkDelegate;
- (void)callErrorDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (id)initWithToken:(id)arg1;

@end

