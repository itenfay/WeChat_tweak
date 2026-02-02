//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXSourceColorProperties : NSObject
{
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *YCbCrMatrix; // @synthesize YCbCrMatrix=_YCbCrMatrix;
@property(copy, nonatomic) NSString *transferFunction; // @synthesize transferFunction=_transferFunction;
@property(copy, nonatomic) NSString *colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;
- (_Bool)needHDRtoSDR:(struct WxVideoTransParaABA)arg1 enableSetColorProperty:(int)arg2;
- (id)makeSettingsRangeDictionary:(struct WxVideoTransParaABA)arg1 enableSetColorProperty:(int)arg2;
- (id)makeSettingsColorDictionary:(struct WxVideoTransParaABA)arg1 isHEVCHardware:(_Bool)arg2 isHEVCSoftware:(_Bool)arg3 enableSetColorProperty:(int)arg4;
- (id)init;

@end

