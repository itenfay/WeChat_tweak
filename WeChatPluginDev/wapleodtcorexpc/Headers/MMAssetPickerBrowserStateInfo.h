//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMAssetPickerBrowserStateInfo : NSObject
{
    _Bool _selectable;
    _Bool _videoCropable;
    _Bool _isiCloudError;
    unsigned long long _imageSize;
    NSString *_errorInfo;
    unsigned long long _checkResult;
}

+ (void)reportSelectImageFailedWithFileSize:(unsigned int)arg1;
+ (id)videoStateInfoWithAvAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(int)arg3 isSlowmotion:(_Bool)arg4;
+ (id)gifStateInfoWithImageData:(id)arg1 image:(id)arg2 isSend:(_Bool)arg3 needCheckValid:(_Bool)arg4 maxSize:(unsigned int)arg5;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long checkResult; // @synthesize checkResult=_checkResult;
@property(nonatomic) _Bool isiCloudError; // @synthesize isiCloudError=_isiCloudError;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool videoCropable; // @synthesize videoCropable=_videoCropable;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;

@end

