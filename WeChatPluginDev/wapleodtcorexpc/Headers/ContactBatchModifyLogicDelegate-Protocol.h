//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSArray, NSString;

@protocol ContactBatchModifyLogicDelegate <MMUIViewControllerDelegate>
- (void)OnContactBatchModifySnsNointeresting:(NSArray *)arg1 resultFlag:(_Bool)arg2;
- (void)OnContactBatchModify:(NSArray *)arg1 withRet:(unsigned int)arg2 errorMsg:(NSString *)arg3 isNetWorkError:(_Bool)arg4;
@end

