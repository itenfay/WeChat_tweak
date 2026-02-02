//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicMVTrackItem, NSMutableDictionary, NSString, UIImage, WCFinderDataItem;

@interface MMMusicMVTrackItemThumbInfo : NSObject
{
    WCFinderDataItem *_finderDataItem;
    UIImage *_thumbImage;
    NSMutableDictionary *_dictVideoThumb;
    NSString *_videoLocalPath;
    NSString *_thumbUrl;
    MMMusicMVTrackItem *_refTrackItem;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMMusicMVTrackItem *refTrackItem; // @synthesize refTrackItem=_refTrackItem;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *videoLocalPath; // @synthesize videoLocalPath=_videoLocalPath;
@property(retain, nonatomic) NSMutableDictionary *dictVideoThumb; // @synthesize dictVideoThumb=_dictVideoThumb;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;

@end

