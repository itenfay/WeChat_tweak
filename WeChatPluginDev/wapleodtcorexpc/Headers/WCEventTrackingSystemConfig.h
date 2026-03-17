//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCEventTrackingSystemConfig : NSObject
{
    _Bool _openEventTacking;
    _Bool _trackUIButton;
    _Bool _trackRichTextView;
    _Bool _trackTableViewCell;
    _Bool _trackAlert;
    _Bool _trackUISwitch;
}

+ (id)defaultConfig;
@property(nonatomic) _Bool trackUISwitch; // @synthesize trackUISwitch=_trackUISwitch;
@property(nonatomic) _Bool trackAlert; // @synthesize trackAlert=_trackAlert;
@property(nonatomic) _Bool trackTableViewCell; // @synthesize trackTableViewCell=_trackTableViewCell;
@property(nonatomic) _Bool trackRichTextView; // @synthesize trackRichTextView=_trackRichTextView;
@property(nonatomic) _Bool trackUIButton; // @synthesize trackUIButton=_trackUIButton;
@property(nonatomic) _Bool openEventTacking; // @synthesize openEventTacking=_openEventTacking;

@end

