//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString;

@protocol PhoneAuthManagePhoneViewControllerDataSource <NSObject>
- (NSString *)fromUrlString;
- (NSString *)fromAppid;
- (NSMutableArray *)phoneInfos;
@end

