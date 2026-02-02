//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class APCheck;

@protocol APCheckDelegate <NSObject>

@optional
- (void)didFailOfApCheck:(APCheck *)arg1 withErrCode:(int)arg2;
- (void)didSuccessOfApCheck:(APCheck *)arg1;
@end

