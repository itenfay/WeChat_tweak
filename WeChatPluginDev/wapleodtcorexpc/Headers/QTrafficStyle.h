//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface QTrafficStyle : NSObject
{
    int _borderWidth;
    int _lineWidth;
    UIColor *_smoothColor;
    UIColor *_smoothBorderColor;
    UIColor *_slowColor;
    UIColor *_slowBorderColor;
    UIColor *_congestedColor;
    UIColor *_congestedBorderColor;
    UIColor *_seriouseCongestedColor;
    UIColor *_seriouseCongestedBorderColor;
}

- (void).cxx_destruct;
@property(nonatomic) int lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) int borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *seriouseCongestedBorderColor; // @synthesize seriouseCongestedBorderColor=_seriouseCongestedBorderColor;
@property(retain, nonatomic) UIColor *seriouseCongestedColor; // @synthesize seriouseCongestedColor=_seriouseCongestedColor;
@property(retain, nonatomic) UIColor *congestedBorderColor; // @synthesize congestedBorderColor=_congestedBorderColor;
@property(retain, nonatomic) UIColor *congestedColor; // @synthesize congestedColor=_congestedColor;
@property(retain, nonatomic) UIColor *slowBorderColor; // @synthesize slowBorderColor=_slowBorderColor;
@property(retain, nonatomic) UIColor *slowColor; // @synthesize slowColor=_slowColor;
@property(retain, nonatomic) UIColor *smoothBorderColor; // @synthesize smoothBorderColor=_smoothBorderColor;
@property(retain, nonatomic) UIColor *smoothColor; // @synthesize smoothColor=_smoothColor;

@end

