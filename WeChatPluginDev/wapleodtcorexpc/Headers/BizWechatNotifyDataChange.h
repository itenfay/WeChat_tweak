//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BizWechatNotifyDataChange : NSObject
{
    struct BizWechatNotifyDataChangeCallbackBridge *callback_;
}

+ (id)shareInstance;
- (void)callOnFirstScreenResortEnd:(unsigned long long)arg1 scene:(unsigned int)arg2 endInfo:(id)arg3;
- (void)callOnFirstScreenResortStart:(unsigned long long)arg1 scene:(unsigned int)arg2 startInfo:(id)arg3;
- (void)callOnFirstScreenPreResort:(unsigned long long)arg1 scene:(unsigned int)arg2 startInfo:(id)arg3;
- (void)callOnKV:(unsigned int)arg1 value:(id)arg2;
- (void)callOnIDKey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)callOnInitDone:(_Bool)arg1;
- (void)callOnDataChange:(unsigned int)arg1;
- (struct BizWechatNotifyDataChangeBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

