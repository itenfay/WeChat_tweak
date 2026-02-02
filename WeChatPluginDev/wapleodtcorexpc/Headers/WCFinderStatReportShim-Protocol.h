//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderStatMetaModel;

@protocol WCFinderStatReportShim <NSObject>
- (void)onUpdateStatMetaModel:(WCFinderStatMetaModel *)arg1;

@optional
- (void)onShimBePopFromManager;
- (void)onShimBePushToManager;
- (_Bool)filterShouldRecardStatMetaModel:(WCFinderStatMetaModel *)arg1;
@end

