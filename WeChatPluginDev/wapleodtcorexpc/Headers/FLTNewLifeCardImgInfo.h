//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTPhotoCropInfo, FLTPictureCropInfo, NSNumber, NSString;

@interface FLTNewLifeCardImgInfo : NSObject
{
    NSString *_thumbUrl;
    NSString *_thumbUrlToken;
    NSString *_thumbLocalPath;
    NSString *_url;
    NSString *_urlToken;
    NSString *_localPath;
    NSString *_decodeKey;
    FLTPhotoCropInfo *_cropInfo;
    FLTPictureCropInfo *_picCropInfo;
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithThumbUrl:(id)arg1 thumbUrlToken:(id)arg2 thumbLocalPath:(id)arg3 url:(id)arg4 urlToken:(id)arg5 localPath:(id)arg6 decodeKey:(id)arg7 cropInfo:(id)arg8 picCropInfo:(id)arg9 width:(id)arg10 height:(id)arg11;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) FLTPictureCropInfo *picCropInfo; // @synthesize picCropInfo=_picCropInfo;
@property(retain, nonatomic) FLTPhotoCropInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property(copy, nonatomic) NSString *decodeKey; // @synthesize decodeKey=_decodeKey;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(copy, nonatomic) NSString *urlToken; // @synthesize urlToken=_urlToken;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *thumbLocalPath; // @synthesize thumbLocalPath=_thumbLocalPath;
@property(copy, nonatomic) NSString *thumbUrlToken; // @synthesize thumbUrlToken=_thumbUrlToken;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
- (id)toList;

@end

