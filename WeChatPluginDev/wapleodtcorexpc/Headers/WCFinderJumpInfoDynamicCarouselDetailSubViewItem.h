//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc, NSAttributedString, NSString, NSURL, UIColor;

@interface WCFinderJumpInfoDynamicCarouselDetailSubViewItem : NSObject
{
    _Bool _showsBorder;
    int _type;
    FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc *_subDesc;
    NSURL *_iconURL;
    NSString *_iconName;
    long long _iconFileType;
    UIColor *_iconColor;
    double _iconAlpha;
    NSString *_detailText;
    NSAttributedString *_detailAttributedText;
    UIColor *_detailTextColor;
    UIColor *_borderColor;
    struct CGSize _iconSize;
}

+ (id)defaultContentColor;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) _Bool showsBorder; // @synthesize showsBorder=_showsBorder;
@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(copy, nonatomic) NSAttributedString *detailAttributedText; // @synthesize detailAttributedText=_detailAttributedText;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(nonatomic) double iconAlpha; // @synthesize iconAlpha=_iconAlpha;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long iconFileType; // @synthesize iconFileType=_iconFileType;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc *subDesc; // @synthesize subDesc=_subDesc;
- (id)generateScoreDetailAttributedText;
- (id)generateCountdownDetailText;
- (_Bool)isCountdownEndedAtTime:(unsigned long long)arg1;
- (_Bool)isCountdownEnded;
- (_Bool)shouldUpdateTypicalViewPropertiesConstantly;
- (void)updateTypicalViewProperties;
- (void)reloadViewProperties;
- (void)_init;
- (id)init;
- (id)initWithSubDesc:(id)arg1;

@end

