//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, TenpaySecureCtrl;

@interface KindaSecureCtrlItem : NSObject
{
    TenpaySecureCtrl *_m_secureCtrlItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TenpaySecureCtrl *m_secureCtrlItem; // @synthesize m_secureCtrlItem=_m_secureCtrlItem;
- (id)getValue;
- (void)setRawValue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

