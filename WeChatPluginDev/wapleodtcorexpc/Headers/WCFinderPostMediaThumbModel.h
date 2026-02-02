//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFullScreenEditRectModel;

@interface WCFinderPostMediaThumbModel : NSObject
{
    int _ratio;
    NSString *_mediaPath;
    NSString *_thumbPath;
    double _originScore;
    double _thumbScore;
    NSString *_fullScreenThumbPath;
    WCFinderFullScreenEditRectModel *_editRectModel;
    NSString *_halfMediaPath;
}

- (void).cxx_destruct;
@property(nonatomic) int ratio; // @synthesize ratio=_ratio;
@property(copy, nonatomic) NSString *halfMediaPath; // @synthesize halfMediaPath=_halfMediaPath;
@property(retain, nonatomic) WCFinderFullScreenEditRectModel *editRectModel; // @synthesize editRectModel=_editRectModel;
@property(copy, nonatomic) NSString *fullScreenThumbPath; // @synthesize fullScreenThumbPath=_fullScreenThumbPath;
@property(nonatomic) double thumbScore; // @synthesize thumbScore=_thumbScore;
@property(nonatomic) double originScore; // @synthesize originScore=_originScore;
@property(copy, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(copy, nonatomic) NSString *mediaPath; // @synthesize mediaPath=_mediaPath;

@end

