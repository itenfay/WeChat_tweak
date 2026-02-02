//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class NSString;

@protocol ModifyPatSuffixLogicDelegate <MMUIViewControllerDelegate>

@optional
- (void)OnModifyPatSuffixWithResult:(unsigned int)arg1 errorMsgTitle:(NSString *)arg2 errorMsgContent:(NSString *)arg3 errorCode:(int)arg4;
@end

