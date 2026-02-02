//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol EJFileSystemDelegate;

@interface WAEJFileSystem : NSObject
{
    id <EJFileSystemDelegate> delegate;
    NSMutableArray *_noretainObejcts;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EJFileSystemDelegate> delegate; // @synthesize delegate;
- (void)cancelAllFileTask;
- (void)enterForeground;
- (void)addBackground:(id)arg1;
- (id)createImageWithSvgData:(id)arg1 resize:(struct CGSize)arg2 scale:(double)arg3;
- (id)getFileDataWithUrl:(id)arg1;
- (id)getFileData:(id)arg1;
- (_Bool)isFileExist:(id)arg1;
- (void)dealloc;

@end

