//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol OVCGIFToVideoConverterDelegate;

@interface OVCGIFToVideoConverter : NSObject
{
    struct SharedPtr<XVCGIFToVideoConverter> _backingConvertor;
    id <OVCGIFToVideoConverterDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <OVCGIFToVideoConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelConverting;
- (void)startConvertingWithGIFFilePath:(id)arg1 toVideo:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

