//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DynamicModuleUtil : NSObject
{
}

+ (void)dictToKvData:(id)arg1 kvData:(id)arg2;
+ (id)makeResultCancel:(id)arg1 msg:(id)arg2;
+ (id)makeResultFail:(id)arg1 msg:(id)arg2;
+ (id)makeResultSuccess:(id)arg1 msg:(id)arg2;
+ (id)makeResult:(_Bool)arg1 result:(id)arg2 msg:(id)arg3;

@end

