//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCMVVMViewComponent <NSObject>
- (void)didChangeViewModel:(NSString *)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;

@optional
- (void)viewModel:(id)arg1 didChangeProperty:(NSString *)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
@end

