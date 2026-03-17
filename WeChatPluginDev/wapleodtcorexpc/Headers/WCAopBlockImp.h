//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAopBlockImp : NSObject
{
    CDUnknownFunctionPointerType m_blockIMP;
}

- (void)dealloc;
@property(readonly, nonatomic) CDUnknownFunctionPointerType blockIMP;
- (id)initFromBlock:(id)arg1;

@end

