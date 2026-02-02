//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicEditVideoCellExportModel, NSDictionary, UIImage;

@protocol MMMusicEditVideoCellViewDelegate <NSObject>
- (void)onMMMusicEditVideoCellViewFinish:(MMMusicEditVideoCellExportModel *)arg1;
- (void)onMMMusicEditVideoCellViewCancel:(UIImage *)arg1 extInfo:(NSDictionary *)arg2;
@end

