//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FLTActionRequest, NSArray;

@protocol FLTFlowListDataAction
- (void)previewPicturesPictures:(NSArray *)arg1 index:(long long)arg2 isNeedNotifyPictureSelectChanged:(_Bool)arg3 completion:(void (^)(NSNumber *, FlutterError *))arg4;
- (void)fltNewLifeActionRequest:(FLTActionRequest *)arg1 completion:(void (^)(FLTActionResponse *, FlutterError *))arg2;
@end

