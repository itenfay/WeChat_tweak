//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameVideoItem : NSObject
{
    _Bool _inActionSheet;
    unsigned int _scene;
    int _educationType;
    unsigned int _educationReportExtType;
    unsigned int _educationReportExtPosition;
    NSString *_text;
    NSString *_desc;
    CDUnknownBlockType _tapCallback;
    NSString *_educationTitleOnce;
    NSString *_educationDescOnce;
    NSString *_educationTitleEveryTime;
    NSString *_educationDescEveryTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int educationReportExtPosition; // @synthesize educationReportExtPosition=_educationReportExtPosition;
@property(nonatomic) unsigned int educationReportExtType; // @synthesize educationReportExtType=_educationReportExtType;
@property(retain, nonatomic) NSString *educationDescEveryTime; // @synthesize educationDescEveryTime=_educationDescEveryTime;
@property(retain, nonatomic) NSString *educationTitleEveryTime; // @synthesize educationTitleEveryTime=_educationTitleEveryTime;
@property(retain, nonatomic) NSString *educationDescOnce; // @synthesize educationDescOnce=_educationDescOnce;
@property(retain, nonatomic) NSString *educationTitleOnce; // @synthesize educationTitleOnce=_educationTitleOnce;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(nonatomic) _Bool inActionSheet; // @synthesize inActionSheet=_inActionSheet;
@property(nonatomic) int educationType; // @synthesize educationType=_educationType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)initWithScene:(unsigned int)arg1;

@end

