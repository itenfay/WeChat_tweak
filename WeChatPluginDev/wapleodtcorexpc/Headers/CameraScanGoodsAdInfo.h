//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CameraScanGoodsAdInfo : NSObject
{
    _Bool _isAllResourcesOK;
    unsigned int _adHandID;
    NSString *_adUxInfo;
    NSURL *_markDotImageURL;
    NSURL *_introduceImageURL;
    NSURL *_bottomBgImageURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAllResourcesOK; // @synthesize isAllResourcesOK=_isAllResourcesOK;
@property(copy, nonatomic) NSURL *bottomBgImageURL; // @synthesize bottomBgImageURL=_bottomBgImageURL;
@property(copy, nonatomic) NSURL *introduceImageURL; // @synthesize introduceImageURL=_introduceImageURL;
@property(copy, nonatomic) NSURL *markDotImageURL; // @synthesize markDotImageURL=_markDotImageURL;
@property(nonatomic) unsigned int adHandID; // @synthesize adHandID=_adHandID;
@property(copy, nonatomic) NSString *adUxInfo; // @synthesize adUxInfo=_adUxInfo;
- (id)adTraceID;

@end

