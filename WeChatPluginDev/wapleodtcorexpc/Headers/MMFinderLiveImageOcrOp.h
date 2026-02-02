//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MMFinderLiveImageOcrOp : NSObject
{
    _Bool _isInImageOCR;
    NSArray *_images;
    NSMutableArray *_ocrResults;
    double _timeout;
    CDUnknownBlockType _handler;
}

+ (id)imageToFeatureBuf:(id)arg1 filePath:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSMutableArray *ocrResults; // @synthesize ocrResults=_ocrResults;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) _Bool isInImageOCR; // @synthesize isInImageOCR=_isInImageOCR;
- (void)releaseOcrXNetCache;
- (void)callbackOcrResult;
- (void)stop;
- (void)start;
- (id)initWithImage:(id)arg1 timeout:(double)arg2 handler:(CDUnknownBlockType)arg3;

@end

