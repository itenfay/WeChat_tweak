//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FlutterPAGInfo, NSNumber, NSString;

@protocol PAGViewApi
- (void)flushPagId:(NSNumber *)arg1 completion:(void (^)(NSNumber *, FlutterError *))arg2;
- (NSNumber *)replaceImagePagId:(NSNumber *)arg1 index:(NSNumber *)arg2 filepath:(NSString *)arg3 error:(id *)arg4;
- (NSNumber *)setSolidLayerColorPagId:(NSNumber *)arg1 name:(NSString *)arg2 color:(NSNumber *)arg3 error:(id *)arg4;
- (void)seekPagId:(NSNumber *)arg1 timeMs:(NSNumber *)arg2 error:(id *)arg3;
- (void)pagViewReleasePagId:(NSNumber *)arg1 error:(id *)arg2;
- (NSNumber *)pagViewStopPagId:(NSNumber *)arg1 error:(id *)arg2;
- (NSNumber *)pagViewStartPlayPagId:(NSNumber *)arg1 error:(id *)arg2;
- (void)createInfo:(FlutterPAGInfo *)arg1 completion:(void (^)(NSNumber *, FlutterError *))arg2;
@end

