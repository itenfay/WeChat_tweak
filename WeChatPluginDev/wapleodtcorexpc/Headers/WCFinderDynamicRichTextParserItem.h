//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderDynamicRichTextParserItem : NSObject
{
    long long _type;
    NSString *_text;
    NSString *_color;
    long long _imageId;
    NSString *_src;
    NSString *_href;
}

+ (id)iconWithSrc:(id)arg1;
+ (id)iconItem:(long long)arg1;
+ (id)textItem:(id)arg1 color:(id)arg2 href:(id)arg3;
+ (id)textItem:(id)arg1 color:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(nonatomic) long long imageId; // @synthesize imageId=_imageId;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long type; // @synthesize type=_type;

@end

