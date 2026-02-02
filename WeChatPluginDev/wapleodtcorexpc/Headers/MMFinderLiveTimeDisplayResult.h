//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveTimeDisplayResult : NSObject
{
    long long _displayFormat;
    NSString *_displayText;
    NSString *_accessibilityText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) long long displayFormat; // @synthesize displayFormat=_displayFormat;

@end

