//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface __CThreadWarp : NSObject
{
    CDUnknownFunctionPointerType m_funp;
    void *m_arg;
    CDUnknownFunctionPointerType m_fun;
}

@property(nonatomic) void *m_arg; // @synthesize m_arg;
@property(nonatomic) CDUnknownFunctionPointerType m_fun; // @synthesize m_fun;
@property(nonatomic) CDUnknownFunctionPointerType m_funp; // @synthesize m_funp;
- (void)Run;
- (id)init;

@end

