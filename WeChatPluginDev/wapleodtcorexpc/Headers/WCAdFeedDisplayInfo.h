//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFeedDisplayInfo : NSObject
{
    int contentDisplayType;
    int mediaDisplayMode;
    int basicRemWidth;
    int basicRootFontSize;
    double mediaDisplayWidth;
    double mediaDisplayHeight;
    NSString *mediaIconUrl;
    double mediaIconWidth;
    double mediaIconHeight;
    double mediaIconPaddingRight;
    double mediaIconPaddingBottom;
}

- (void).cxx_destruct;
@property(nonatomic) double mediaIconPaddingBottom; // @synthesize mediaIconPaddingBottom;
@property(nonatomic) double mediaIconPaddingRight; // @synthesize mediaIconPaddingRight;
@property(nonatomic) double mediaIconHeight; // @synthesize mediaIconHeight;
@property(nonatomic) double mediaIconWidth; // @synthesize mediaIconWidth;
@property(retain, nonatomic) NSString *mediaIconUrl; // @synthesize mediaIconUrl;
@property(nonatomic) double mediaDisplayHeight; // @synthesize mediaDisplayHeight;
@property(nonatomic) double mediaDisplayWidth; // @synthesize mediaDisplayWidth;
@property(nonatomic) int basicRootFontSize; // @synthesize basicRootFontSize;
@property(nonatomic) int basicRemWidth; // @synthesize basicRemWidth;
@property(nonatomic) int mediaDisplayMode; // @synthesize mediaDisplayMode;
@property(nonatomic) int contentDisplayType; // @synthesize contentDisplayType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

