//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCBaseNetworkingError, WCFinderMJSetTemplateViewModel;

@protocol WCFinderMJSetTemplateViewModelDelegate <NSObject>
- (void)onMJSetTempVM:(WCFinderMJSetTemplateViewModel *)arg1 fetchDataFinish:(_Bool)arg2 error:(WCBaseNetworkingError *)arg3;
- (void)onMJSetTempVM:(WCFinderMJSetTemplateViewModel *)arg1 fetchHeaderInfoFinish:(_Bool)arg2 error:(WCBaseNetworkingError *)arg3;
@end

