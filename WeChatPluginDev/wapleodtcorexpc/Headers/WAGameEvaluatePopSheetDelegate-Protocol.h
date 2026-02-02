//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WAGameEvaluatePopSheetDelegate <NSObject>
- (void)writeGameEvaluateResult:(unsigned int)arg1 QuestionId:(NSString *)arg2;
- (void)onCloseGameEvaluatePopSheet:(NSString *)arg1;
@end

