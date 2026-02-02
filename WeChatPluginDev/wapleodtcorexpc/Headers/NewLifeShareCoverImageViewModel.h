//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL, NewLifePictureCropInfo, UIColor, UIFont, WCFinderContact, WCFinderShareToMomentsItem;

@interface NewLifeShareCoverImageViewModel : NSObject
{
    _Bool _ignoreNameSection;
    _Bool _showRedPacket;
    int _coverViewType;
    WCFinderContact *_finderContact;
    NSURL *_coverImageUrl;
    NSString *_finderUsername;
    NSString *_avatarImageUrlString;
    NSString *_nickName;
    NSString *_descText;
    UIColor *_bgColor;
    double _avatarLength;
    double _aspectRatio;
    double _nameInnerSpace;
    UIFont *_nameFont;
    UIFont *_descFont;
    unsigned long long _photoCount;
    UIFont *_albumLabelFont;
    double _contentPadding;
    NewLifePictureCropInfo *_coverCropInfo;
    WCFinderShareToMomentsItem *_shareToMomentsItem;
    struct CGSize _firstMediaSize;
    struct CGSize _albumIconSize;
}

- (void).cxx_destruct;
@property(nonatomic) int coverViewType; // @synthesize coverViewType=_coverViewType;
@property(retain, nonatomic) WCFinderShareToMomentsItem *shareToMomentsItem; // @synthesize shareToMomentsItem=_shareToMomentsItem;
@property(nonatomic) _Bool showRedPacket; // @synthesize showRedPacket=_showRedPacket;
@property(retain, nonatomic) NewLifePictureCropInfo *coverCropInfo; // @synthesize coverCropInfo=_coverCropInfo;
@property(nonatomic) double contentPadding; // @synthesize contentPadding=_contentPadding;
@property(retain, nonatomic) UIFont *albumLabelFont; // @synthesize albumLabelFont=_albumLabelFont;
@property(nonatomic) struct CGSize albumIconSize; // @synthesize albumIconSize=_albumIconSize;
@property(nonatomic) unsigned long long photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(nonatomic) struct CGSize firstMediaSize; // @synthesize firstMediaSize=_firstMediaSize;
@property(nonatomic) double nameInnerSpace; // @synthesize nameInnerSpace=_nameInnerSpace;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double avatarLength; // @synthesize avatarLength=_avatarLength;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool ignoreNameSection; // @synthesize ignoreNameSection=_ignoreNameSection;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *avatarImageUrlString; // @synthesize avatarImageUrlString=_avatarImageUrlString;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSURL *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
- (double)estimateHeight:(double)arg1;
- (void)initData;
- (id)initWithShareItem:(id)arg1 coverViewType:(int)arg2;

@end

