//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface WCFinderCheckThumbModel : NSObject
{
    _Bool _useAlgorithmCover;
    UIImage *_image;
    unsigned long long _selectTimeStamp;
    unsigned long long _calcBlackFrameDuration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useAlgorithmCover; // @synthesize useAlgorithmCover=_useAlgorithmCover;
@property(nonatomic) unsigned long long calcBlackFrameDuration; // @synthesize calcBlackFrameDuration=_calcBlackFrameDuration;
@property(nonatomic) unsigned long long selectTimeStamp; // @synthesize selectTimeStamp=_selectTimeStamp;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;

@end

