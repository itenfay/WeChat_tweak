//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage, WCMomentsTemplateShareInfo;

@interface MJTemplateFullScreenControlViewParams : NSObject
{
    _Bool _bForbidAutoHidden;
    _Bool _forbidensSeek;
    _Bool _forbidensTouchHlighlight;
    WCMomentsTemplateShareInfo *_shareInfo;
    double _videoDuration;
    UIImage *_dotActiveImage;
    UIImage *_dotInactiveImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *dotInactiveImage; // @synthesize dotInactiveImage=_dotInactiveImage;
@property(retain, nonatomic) UIImage *dotActiveImage; // @synthesize dotActiveImage=_dotActiveImage;
@property(nonatomic) _Bool forbidensTouchHlighlight; // @synthesize forbidensTouchHlighlight=_forbidensTouchHlighlight;
@property(nonatomic) _Bool forbidensSeek; // @synthesize forbidensSeek=_forbidensSeek;
@property(nonatomic) _Bool bForbidAutoHidden; // @synthesize bForbidAutoHidden=_bForbidAutoHidden;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) WCMomentsTemplateShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;

@end

