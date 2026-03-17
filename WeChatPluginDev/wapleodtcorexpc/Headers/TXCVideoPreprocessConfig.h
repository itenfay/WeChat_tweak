//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoPreprocessConfig : NSObject
{
    _Bool _isEnabled;
    float _imageFilterStrength;
}

@property(nonatomic) float imageFilterStrength; // @synthesize imageFilterStrength=_imageFilterStrength;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)init;

@end

