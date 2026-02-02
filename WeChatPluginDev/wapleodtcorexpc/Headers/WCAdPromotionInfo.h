//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdPromotionInfo : NSObject
{
    int _leftTitleType;
    long long _startTime;
    long long _endTime;
    NSString *_barBgColor;
    double _barBgAlpha;
    NSString *_leftTitle;
    NSString *_rightTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(nonatomic) int leftTitleType; // @synthesize leftTitleType=_leftTitleType;
@property(nonatomic) double barBgAlpha; // @synthesize barBgAlpha=_barBgAlpha;
@property(retain, nonatomic) NSString *barBgColor; // @synthesize barBgColor=_barBgColor;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

