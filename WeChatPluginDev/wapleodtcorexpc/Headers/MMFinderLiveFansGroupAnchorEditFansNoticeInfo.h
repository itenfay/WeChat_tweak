//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveFansGroupAnchorEditFansNoticeInfo : NSObject
{
    unsigned int _levelRequired;
    unsigned int _visibility;
    unsigned long long _maxLevelAvailable;
    NSString *_notice;
    NSString *_imageUrlString;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int visibility; // @synthesize visibility=_visibility;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageUrlString; // @synthesize imageUrlString=_imageUrlString;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(nonatomic) unsigned long long maxLevelAvailable; // @synthesize maxLevelAvailable=_maxLevelAvailable;
@property(nonatomic) unsigned int levelRequired; // @synthesize levelRequired=_levelRequired;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

