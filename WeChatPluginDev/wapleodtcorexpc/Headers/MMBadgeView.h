//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@class NSString, UIColor, UILabel;

@interface MMBadgeView : UIImageView
{
    int _maxCount;
    NSString *_maxCountTip;
    UILabel *_badgeLabel;
    double _badgeFontSize;
    unsigned long long _shape;
    UIColor *_bgColor;
}

+ (id)NEWRedDot;
+ (id)dotWithNumber:(unsigned long long)arg1 color:(id)arg2;
+ (id)redDotWithNumber:(unsigned long long)arg1;
+ (double)liveSmallRedDotLen;
+ (id)liveSmallRedDot;
+ (id)smallRedDot;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) unsigned long long shape; // @synthesize shape=_shape;
@property(nonatomic) double badgeFontSize; // @synthesize badgeFontSize=_badgeFontSize;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) NSString *maxCountTip; // @synthesize maxCountTip=_maxCountTip;
@property(nonatomic) int maxCount; // @synthesize maxCount=_maxCount;
- (id)strechBadgeImage:(id)arg1;
- (id)cacheColorKeyForCurrentBadge;
- (void)setRedDotImageWithDiameter:(double)arg1 shouldStretch:(_Bool)arg2;
- (id)redDotImageWithDiameter:(double)arg1;
- (_Bool)isPureInteger:(id)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (double)pixelAlignedCeil:(double)arg1;
- (void)useStaticSize;
- (void)updateWithSize:(struct CGSize)arg1;
- (void)updateWithFontSize:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)removeSmallDot;
- (void)setCircleDotWithDiameter:(double)arg1;
- (void)setAsSmallDotForLiveSession;
- (void)setAsSmallDotForChatSession;
- (void)setAsSmallDot;
- (void)setAsNew;
- (void)setString:(id)arg1;
- (void)innerSetBadgeShape;
- (void)innerSetCircleShape;
- (void)setValue:(unsigned long long)arg1;

@end

