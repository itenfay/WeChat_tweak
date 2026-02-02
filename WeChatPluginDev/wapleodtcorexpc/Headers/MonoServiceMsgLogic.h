//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MonoServiceMsgLogicDelegate;

@interface MonoServiceMsgLogic : NSObject
{
    id <MonoServiceMsgLogicDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MonoServiceMsgLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;

@end

