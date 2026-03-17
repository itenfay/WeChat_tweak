//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WACameraScanCodeParam, WACameraScanItemParam;
@protocol IWACameraScanViewControllerHelper;

@protocol IWACameraScanViewControllerService <NSObject>
+ (id <IWACameraScanViewControllerHelper>)generateViewControllerWithItemParam:(WACameraScanItemParam *)arg1;
+ (long long)codeTypeForCodeTypeStrList:(NSArray *)arg1;
+ (id <IWACameraScanViewControllerHelper>)generateViewControllerWithCodeParam:(WACameraScanCodeParam *)arg1;
@end

