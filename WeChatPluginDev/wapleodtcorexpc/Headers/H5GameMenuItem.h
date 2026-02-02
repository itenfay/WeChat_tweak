//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface H5GameMenuItem : NSObject
{
    _Bool _isCustom;
    unsigned int _itemId;
    int _actionType;
    unsigned int _placeId;
    UIImage *_iconImg;
    id _userInfo;
    NSString *_title;
    NSString *_thumbUrl;
    NSString *_targetUrl;
}

+ (id)initFromCustomMenuItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int placeId; // @synthesize placeId=_placeId;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
@property(nonatomic) _Bool isCustom; // @synthesize isCustom=_isCustom;
- (id)toStandardMenuItem;
- (id)getValidTitle;
- (_Bool)isValid;

@end

