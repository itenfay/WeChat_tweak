//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTextDetailItem : NSObject
{
    NSString *_title;
    NSString *_text;
}

+ (id)itemsBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

