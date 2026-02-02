//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CIImage, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface TAVImageFileResouce
{
    NSString *_filePath;
    CIImage *_tempImage;
    CDUnknownBlockType _cleanBlock;
    NSObject<OS_dispatch_semaphore> *_operationSemaphore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *operationSemaphore; // @synthesize operationSemaphore=_operationSemaphore;
@property(copy, nonatomic) CDUnknownBlockType cleanBlock; // @synthesize cleanBlock=_cleanBlock;
@property(retain, nonatomic) CIImage *tempImage; // @synthesize tempImage=_tempImage;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)performCleanImage;
- (void)cleanImage;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1 renderSize:(struct CGSize)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)commonInit;
- (id)initWitiFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (id)init;
- (void)dealloc;

@end

