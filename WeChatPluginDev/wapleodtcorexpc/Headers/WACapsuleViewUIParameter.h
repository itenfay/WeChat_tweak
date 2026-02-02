//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WACapsuleViewUIParameter : NSObject
{
    _Bool _needToPutBackIfInterrupted;
    NSString *_iconUrl;
    NSString *_darkModeIconUrl;
    NSString *_text;
    double _duration;
    unsigned long long _state;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needToPutBackIfInterrupted; // @synthesize needToPutBackIfInterrupted=_needToPutBackIfInterrupted;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *darkModeIconUrl; // @synthesize darkModeIconUrl=_darkModeIconUrl;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;

@end

