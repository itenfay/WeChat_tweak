//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString, UIImage;

@protocol EJFileSystemDelegate <NSObject>
- (void)cancelAllFileTask;
- (UIImage *)createImageWithSvgData:(NSData *)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (NSData *)getFileDataWithUrl:(NSString *)arg1;
- (NSData *)getFileData:(NSString *)arg1;
- (_Bool)isFileExist:(NSString *)arg1;
@end

