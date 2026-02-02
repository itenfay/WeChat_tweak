//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCProgressViewHelper;

@interface WCProgressViewBaseAction : NSObject
{
    WCProgressViewHelper *_helper;
    double _currentProgress;
    NSString *_displayText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) __weak WCProgressViewHelper *helper; // @synthesize helper=_helper;

@end

