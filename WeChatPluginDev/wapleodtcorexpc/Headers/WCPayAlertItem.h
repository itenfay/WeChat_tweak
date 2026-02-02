//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayAlertItem : NSObject
{
    NSString *_alertTitle;
    NSString *_leftButtonWording;
    NSString *_rightButtonWording;
    NSString *_rightButtonUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rightButtonUrl; // @synthesize rightButtonUrl=_rightButtonUrl;
@property(retain, nonatomic) NSString *rightButtonWording; // @synthesize rightButtonWording=_rightButtonWording;
@property(retain, nonatomic) NSString *leftButtonWording; // @synthesize leftButtonWording=_leftButtonWording;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;

@end

