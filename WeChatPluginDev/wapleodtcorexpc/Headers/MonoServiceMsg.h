//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MonoServiceMsgDelegate;

@interface MonoServiceMsg : NSObject
{
    id <MonoServiceMsgDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MonoServiceMsgDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)localNotificationInfo;
- (_Bool)isParaVaild;
- (_Bool)isTheSameToMsg:(id)arg1;
- (id)msgKey;
- (id)serviceType;
- (_Bool)isCancelMsg;
- (_Bool)isOutOfDate;
- (id)init;

@end

