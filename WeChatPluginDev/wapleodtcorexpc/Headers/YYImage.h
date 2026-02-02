//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImage.h>

@class NSObject, YYSentinel;
@protocol OS_dispatch_semaphore, YYImageDelegate;

@interface YYImage : UIImage
{
    CDUnknownBlockType m_getBlock;
    _Bool m_isDecodingInBackground;
    NSObject<OS_dispatch_semaphore> *m_lock;
    YYSentinel *m_sentinel;
    _Bool _isDynamicImg;
    UIImage *m_originImage;
    id <YYImageDelegate> _delegate;
    UIImage *_decodeImageLM;
    UIImage *_decodeImageDM;
    struct CGSize _prefertSize;
}

+ (id)imageWithUIImage:(id)arg1 prefertSize:(struct CGSize)arg2;
+ (id)imageWithBlock:(CDUnknownBlockType)arg1 prefertSize:(struct CGSize)arg2;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDynamicImg; // @synthesize isDynamicImg=_isDynamicImg;
@property(retain, nonatomic) UIImage *decodeImageDM; // @synthesize decodeImageDM=_decodeImageDM;
@property(retain, nonatomic) UIImage *decodeImageLM; // @synthesize decodeImageLM=_decodeImageLM;
@property(nonatomic) __weak id <YYImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize prefertSize; // @synthesize prefertSize=_prefertSize;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=m_originImage;
- (id)_fourceDecodeImage:(id)arg1 prefertSize:(struct CGSize)arg2 isCancelled:(CDUnknownBlockType)arg3;
- (void)_loadInBackground;
- (void)_cancelAsyncLoad;
- (void)asyncLoad;
@property(readonly, nonatomic) UIImage *decodeImage;
@property(readonly, nonatomic) UIImage *image;
- (_Bool)isDarkMode;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 prefertSize:(struct CGSize)arg2;

@end

