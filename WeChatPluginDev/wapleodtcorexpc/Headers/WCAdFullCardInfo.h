//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo, WCAdClickBarInfo, WCAdFullCardDragImageGestureInfo, WCAdFullCardEndCoverInfo, WCAdFullCardGestureInfo, WCAdFullCardLongPressGestureInfo;

@interface WCAdFullCardInfo : NSObject
{
    unsigned int _displayType;
    unsigned int _markMaxAlpha;
    unsigned int _titlePosition;
    NSString *_title;
    NSString *_descriptionText;
    WCAdFullCardGestureInfo *_adGestureInfo;
    NSString *_maskImg;
    unsigned long long _maskImgDisappearTime;
    NSString *_coverImg;
    unsigned long long _coverImgAppearTime;
    WCAdFullCardEndCoverInfo *_endCoverInfo;
    WCAdFullCardLongPressGestureInfo *_longPressGestureInfo;
    WCAdFullCardDragImageGestureInfo *_dragImageGestureInfo;
    WCAdClickBarInfo *_adClickBarInfo;
    WCAdCardBtnInfo *_adGestureClickActionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *adGestureClickActionInfo; // @synthesize adGestureClickActionInfo=_adGestureClickActionInfo;
@property(retain, nonatomic) WCAdClickBarInfo *adClickBarInfo; // @synthesize adClickBarInfo=_adClickBarInfo;
@property(retain, nonatomic) WCAdFullCardDragImageGestureInfo *dragImageGestureInfo; // @synthesize dragImageGestureInfo=_dragImageGestureInfo;
@property(retain, nonatomic) WCAdFullCardLongPressGestureInfo *longPressGestureInfo; // @synthesize longPressGestureInfo=_longPressGestureInfo;
@property(retain, nonatomic) WCAdFullCardEndCoverInfo *endCoverInfo; // @synthesize endCoverInfo=_endCoverInfo;
@property(nonatomic) unsigned long long coverImgAppearTime; // @synthesize coverImgAppearTime=_coverImgAppearTime;
@property(retain, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(nonatomic) unsigned long long maskImgDisappearTime; // @synthesize maskImgDisappearTime=_maskImgDisappearTime;
@property(retain, nonatomic) NSString *maskImg; // @synthesize maskImg=_maskImg;
@property(retain, nonatomic) WCAdFullCardGestureInfo *adGestureInfo; // @synthesize adGestureInfo=_adGestureInfo;
@property(nonatomic) unsigned int titlePosition; // @synthesize titlePosition=_titlePosition;
@property(nonatomic) unsigned int markMaxAlpha; // @synthesize markMaxAlpha=_markMaxAlpha;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
- (_Bool)hasCoverImage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

