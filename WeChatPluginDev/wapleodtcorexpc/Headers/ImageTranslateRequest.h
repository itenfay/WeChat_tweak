//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OCRTransReport, OCRTransResultViewController, UIImage;

@interface ImageTranslateRequest : NSObject
{
    OCRTransReport *_statInfo;
    UIImage *_image;
    OCRTransResultViewController *_transResultViewController;
    CDUnknownBlockType _callBack;
    CDUnknownBlockType _finishBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) OCRTransResultViewController *transResultViewController; // @synthesize transResultViewController=_transResultViewController;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) OCRTransReport *statInfo; // @synthesize statInfo=_statInfo;
- (void)onHandleRequestFinish:(long long)arg1 image:(id)arg2 statInfo:(id)arg3;
- (void)onHandleTranslateFinish:(id)arg1 cgiWrap:(id)arg2 context:(id)arg3 statInfo:(id)arg4;
- (void)execute;

@end

