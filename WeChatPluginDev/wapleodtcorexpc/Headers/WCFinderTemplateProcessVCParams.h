//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol WCEditImageViewControllerDelegate, WCEditVideoViewControllerDelegate;

@interface WCFinderTemplateProcessVCParams : NSObject
{
    _Bool _forbidChangeMusic;
    int _imageEntranceScene;
    unsigned long long _pushType;
    id <WCEditVideoViewControllerDelegate> _editVideoVCdelegate;
    NSMutableArray *_fullVideoAssets;
    id <WCEditImageViewControllerDelegate> _editImageVCdelegate;
    NSMutableArray *_fullImageAssets;
    NSMutableArray *_images;
    unsigned long long _imageFromScene;
    NSString *_musicId;
    NSString *_followFeedId;
    NSMutableArray *_omjTemplates;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *omjTemplates; // @synthesize omjTemplates=_omjTemplates;
@property(copy, nonatomic) NSString *followFeedId; // @synthesize followFeedId=_followFeedId;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) _Bool forbidChangeMusic; // @synthesize forbidChangeMusic=_forbidChangeMusic;
@property(nonatomic) unsigned long long imageFromScene; // @synthesize imageFromScene=_imageFromScene;
@property(nonatomic) int imageEntranceScene; // @synthesize imageEntranceScene=_imageEntranceScene;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSMutableArray *fullImageAssets; // @synthesize fullImageAssets=_fullImageAssets;
@property(nonatomic) __weak id <WCEditImageViewControllerDelegate> editImageVCdelegate; // @synthesize editImageVCdelegate=_editImageVCdelegate;
@property(retain, nonatomic) NSMutableArray *fullVideoAssets; // @synthesize fullVideoAssets=_fullVideoAssets;
@property(nonatomic) __weak id <WCEditVideoViewControllerDelegate> editVideoVCdelegate; // @synthesize editVideoVCdelegate=_editVideoVCdelegate;
@property(nonatomic) unsigned long long pushType; // @synthesize pushType=_pushType;

@end

