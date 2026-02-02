//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CameraScanGoodsItemViewModel, NSNumber, NSString, UIImage;

@interface CameraScanCombineScanGoodsResultCardViewModel : NSObject
{
    _Bool _isFail;
    unsigned int _reportType;
    UIImage *_image;
    NSString *_title;
    NSString *_reqKey;
    NSNumber *_trackId;
    CameraScanGoodsItemViewModel *_originViewModel;
    struct CGRect _normalizedRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int reportType; // @synthesize reportType=_reportType;
@property(nonatomic) struct CGRect normalizedRect; // @synthesize normalizedRect=_normalizedRect;
@property(nonatomic) _Bool isFail; // @synthesize isFail=_isFail;
@property(retain, nonatomic) CameraScanGoodsItemViewModel *originViewModel; // @synthesize originViewModel=_originViewModel;
@property(retain, nonatomic) NSNumber *trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithItemViewModel:(id)arg1;

@end

