//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameCenterMsgRemarkInfo : NSObject
{
    unsigned int _remark_type;
    NSString *_text_color;
    NSString *_background_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *background_color; // @synthesize background_color=_background_color;
@property(retain, nonatomic) NSString *text_color; // @synthesize text_color=_text_color;
@property(nonatomic) unsigned int remark_type; // @synthesize remark_type=_remark_type;

@end

