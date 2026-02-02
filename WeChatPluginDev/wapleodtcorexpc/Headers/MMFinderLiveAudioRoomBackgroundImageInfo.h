//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIImage;

@interface MMFinderLiveAudioRoomBackgroundImageInfo : NSObject
{
    NSString *_originalUrlString;
    unsigned long long _backgroundImageState;
    UIImage *_backgroundImage;
    UIColor *_audioWaveColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *audioWaveColor; // @synthesize audioWaveColor=_audioWaveColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) unsigned long long backgroundImageState; // @synthesize backgroundImageState=_backgroundImageState;
@property(retain, nonatomic) NSString *originalUrlString; // @synthesize originalUrlString=_originalUrlString;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

