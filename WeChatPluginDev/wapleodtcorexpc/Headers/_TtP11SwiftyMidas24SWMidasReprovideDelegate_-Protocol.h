//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, SWMidasReprovideResp;

@protocol _TtP11SwiftyMidas24SWMidasReprovideDelegate_
- (NSDictionary *)userForProductReprovidingWithProductIDs:(NSArray *)arg1;

@optional
- (void)productDidReprovideWithResultWithProductID:(NSString *)arg1 reprovideResp:(SWMidasReprovideResp *)arg2 isSuccess:(_Bool)arg3 errorMsg:(NSString *)arg4 isFromRestored:(_Bool)arg5;
- (void)productWillReprovideWithProductID:(NSString *)arg1;
- (_Bool)productShouldReprovideAutomaticallyWithProductID:(NSString *)arg1;
- (_Bool)productShouldReprovideWithProductID:(NSString *)arg1;
@end

